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

using std::cout;
using std::endl;

int		const Fixed::_fract_bits = 8;
float	const Fixed::_factor = powf(2, Fixed::_fract_bits);

Fixed::Fixed( void ) : _num(0) {
	// cout << "Default constructor called" << endl;
	return ;
};

Fixed::Fixed( Fixed const & src ) {
	// cout << "Copy constructor called" << endl;
	*this = src;
	return ;
};

Fixed::Fixed( int const num ) {
	// cout << "Integer constructor called with " << num << endl;
	this->_num = (num << this->_fract_bits);
	return ;
};

Fixed::Fixed( float const num ) {
	// cout << "Float constructor called with " << num << endl;
	int left = ((int)num);
	float right = num - left;
	int left_shifted = left << this->_fract_bits;
	int right_shifted = roundf(right * this->Fixed::_factor);
	this->_num = left_shifted + right_shifted;
	return;
};

Fixed::~Fixed( void ) {
	// cout << "Destructor called" << endl;
	return ;
};

int	Fixed::getRawBits( void ) const {
	// cout << "getRawBits member function called" << endl;
	return this->_num;
};

void Fixed::setRawBits( int const raw ) {
	// cout << "setRawBits member function called" << endl;
	if (this->getRawBits() != raw)
		this->_num = raw;
	return ;
}

int	Fixed::toInt( void ) const {
	int num = this->_num;
	return (num >> 8);
}

float Fixed::toFloat( void ) const {
	return (float)this->_num / this->Fixed::_factor;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {
	// cout << "Copy assignment operator called" << endl;
	if (this != &rhs )
		this->_num = rhs.getRawBits();
	return *this;
};

Fixed Fixed::operator+( Fixed const & rhs ) const {
	return Fixed(rhs.toFloat() + this->toFloat());
}

Fixed Fixed::operator-( Fixed const & rhs ) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs ) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/( Fixed const & rhs ) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator==( Fixed const & rhs ) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) const {
	return (this->getRawBits() != rhs.getRawBits());
}

bool	Fixed::operator>( Fixed const & rhs ) const {
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<( Fixed const & rhs ) const {
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=( Fixed const & rhs ) const {
	return (*this > rhs || *this == rhs);
}

bool	Fixed::operator<=( Fixed const & rhs ) const {
	return (*this < rhs || *this == rhs);
}

Fixed &	Fixed::operator++() {
	++(this->_num);
	return *this;
}

Fixed &	Fixed::operator++( int ) {
	Fixed & prev = *this;
	++(this->_num);
	return prev;
}

Fixed &	Fixed::operator--() {
	--(this->_num);
	return *this;
}

Fixed &	Fixed::operator--( int ) {
	Fixed & prev = *this;
	--(this->_num);
	return prev;
}

std::ostream& operator<<(std::ostream & s, Fixed const & rhs) {
	s << rhs.toFloat();
	return s;
}