/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:09:10 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/11/14 08:18:57 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Personal Test
/* int main( void )
{
	Fixed a (2);
	Fixed b (5);
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d( Fixed( 10.05f ) * Fixed( 4 ) );

	std::cout << "\nNormal values\n" << std::endl;
	std::cout << "value of a: " << a << std::endl;
	std::cout << "value of b: " << b << std::endl;
	std::cout << "value of c: " << c << std::endl;
	std::cout << "value of d: " << d << std::endl;
	
	std::cout << "\nArithmetic operator tests\n" << std::endl;
	std::cout << a + c << "\t\ta + c" << std::endl;
	std::cout << a - c << "\ta - c" << std::endl;
	std::cout << a * c << "\t\ta * c" << std::endl;
	std::cout << a / c << "\ta / c" << std::endl;
	
	std::cout << "\nComparing operators tests\n" << std::endl;
	std::cout << (a > c) << "\tShould print 0 because 'a' is smaller than 'b'" << std::endl;
	std::cout << (a < c) << "\tShould print 1 because 'a' is smaller than 'b'"<< std::endl;
	std::cout << (a <= c) << "\tShould print 1 because 'a' is smaller than 'b'"<< std::endl;
	std::cout << (a >= c) << "\tShould print 0 because 'a' is smaller than 'b'"<< std::endl;
	std::cout << (a == c) << "\tShould print 0 because 'a' is not the same value as 'b'"<< std::endl;
	std::cout << (a != c) << "\tShould print 1 because 'a' is not the same value as 'b'"<< std::endl;
	
	std::cout << "\nIncrement and decrement operators tests\n" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "\nmin and max tests\n" << std::endl;
	std::cout << Fixed::min( a, b ) << "\tmin between 'a' and 'b'" << std::endl;
	std::cout << Fixed::max( a, b ) << "\tmax between 'a' and 'b'" << std::endl;
	std::cout << Fixed::min( c, d ) << "\tmin between 'c' and 'd'" << std::endl;
	std::cout << Fixed::max( c, d ) << "\tmax between 'c' and 'd'" << std::endl;

} */


// Test provided by subject
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}