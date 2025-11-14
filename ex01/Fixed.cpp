/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:40:31 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/14 07:41:26 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _num(num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_num = num << this->_fac;
}


Fixed::Fixed(const float num) : _num(num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_num = roundf(num * (1 << this->_fac));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
	out << num.toFloat();
	return out;
}