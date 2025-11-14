/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:06:49 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/13 10:47:02 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed 
{
	private:
		float _num;
		static const int _fac = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed& operator=(Fixed const& a);
	
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif