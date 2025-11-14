/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:09:12 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/14 08:14:24 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_num = num << this->_fac;
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_num = roundf(num * (1 << this->_fac));
}

Fixed::Fixed(const Fixed& copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& a)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if( this != &a)
		this->_num = a.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return this->_num;
}

void Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->_num / (float)(1 << this->_fac));
}

int Fixed::toInt() const
{
	return (this->_num >> this->_fac);
}

//Arithmetic operator overloads

Fixed Fixed::operator+(Fixed const& a)
{
	return (this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(Fixed const& a)
{
	return (this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(Fixed const& a)
{
    return (this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(Fixed const& a)
{
	return (this->toFloat() / a.toFloat());
}

//Comparison operators overloads

Fixed Fixed::operator>(Fixed const& a)
{
	return (this->toFloat() > a.toFloat());
}

Fixed Fixed::operator<(Fixed const& a)
{
	return (this->toFloat() < a.toFloat());
}

Fixed Fixed::operator>=(Fixed const& a)
{
	return (this->toFloat() >= a.toFloat());
}

Fixed Fixed::operator<=(Fixed const& a)
{
	return (this->toFloat() <= a.toFloat());
}

Fixed Fixed::operator==(Fixed const& a)
{
	return (this->toFloat() == a.toFloat());
}

Fixed Fixed::operator!=(Fixed const& a)
{
	return (this->toFloat() != a.toFloat());
}

//increment and decrement overloads

Fixed Fixed::operator++()
{
	this->_num++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_num;
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_num--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_num;
	return (tmp);
}

//min and max

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if(a.toFloat() <= b.toFloat())
		return a;
	return b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a.toFloat() <= b.toFloat())
		return a;
	return b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if(a.toFloat() >= b.toFloat())
		return a;
	return b;
}
const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a.toFloat() >= b.toFloat())
		return a;
	return b;
}

//output stream overload

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
	out << num.toFloat();
	return out;
}