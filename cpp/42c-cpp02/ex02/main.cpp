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
	Fixed a(2.5f);

	cout << "a is " << a << endl;
	cout << "++a is " << ++a << endl;
	cout << "a-- is " << a-- << endl;
	Fixed b(a);

	cout << "a == b is " << (a == b) << endl;
	Fixed c (a + b);

	cout << "a + b is " << a + b << endl;
	cout << "c is " << c << endl;
	cout << "c - b is " << c - b << endl;
	cout << "a * c is " << a * c << endl;
	cout << "c / a is " << c / a << endl;
	Fixed d(a * c);
	cout << "d is " << d << endl;
	cout << "a / d is " << a / d << endl;

	cout << "a - 5 is " << a - Fixed(5) << endl;
	return 0;
}