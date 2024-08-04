/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:24:08 by tjegades          #+#    #+#             */
/*   Updated: 2024/07/20 13:24:09 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	// Fixed a;
	// a.setRawBits(1280);
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << a.toFloat() << std::endl;

	// Fixed b(2.98f);
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << b.toFloat() << std::endl;
	// return 0;
	Fixed a;
	Fixed const b( -10248 );
	Fixed const c( -42.42f );
	Fixed const d( b );
	a = Fixed( -1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}