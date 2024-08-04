/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:24:33 by tjegades          #+#    #+#             */
/*   Updated: 2024/07/20 13:24:34 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed( void ) : _num(0) {
	cout << "Default constructor called" << endl;
	return ;
};

Fixed::Fixed( Fixed const & src ) {
	cout << "Copy constructor called" << endl;
	*this = src;
	return ;
};

Fixed::~Fixed( void ) {
	cout << "Destructor called" << endl;
	return ;
};

int	Fixed::getRawBits( void ) const {
	cout << "getRawBits member function called" << endl;
	return this->_num;
};

void Fixed::setRawBits( int const raw ) {
	cout << "setRawBits member function called" << endl;
	if (this->getRawBits() != raw)
		this->_num = raw;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs ) {
	cout << "Copy assignment operator called" << endl;
	if (this != &rhs )
		this->_num = rhs.getRawBits();
	return *this;
};