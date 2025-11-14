/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:40:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/13 14:01:01 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int _num;
		static const int _fac = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed& operator=(Fixed const& a);
	
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &num);

#endif