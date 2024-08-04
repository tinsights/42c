/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:24:20 by tjegades          #+#    #+#             */
/*   Updated: 2024/07/20 13:24:21 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Add public member functions to your class to overload the following operators:
 * 	• The 6 comparison operators: >, <, >=, <=, == and !=.
 * 	• The 4 arithmetic operators: +, -, *, and /.
 * 	• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
 * 		post-decrement) operators, that will increase or decrease the fixed-point value from
 * 		the smallest representable ϵ such as 1 + ϵ > 1.
 * 		Add these four public overloaded member functions to your class:
 * 	• A static member function min that takes as parameters two references on fixed-point
 * 		numbers, and returns a reference to the smallest one.
 * 	• A static member function min that takes as parameters two references to constant
 * 		fixed-point numbers, and returns a reference to the smallest one.
 * 	• A static member function max that takes as parameters two references on fixed-point
 * 		numbers, and returns a reference to the greatest one.
 * 	• A static member function max that takes as parameters two references to constant
 * 		fixed-point numbers, and returns a reference to the greatest one.
 * 
*/

#pragma once
#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Fixed {
	public:
		Fixed( void );
		Fixed( int const num );
		Fixed( float const num );
		Fixed( Fixed const & src );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

    Fixed & operator=(Fixed const & rhs) ;
    Fixed   operator+(Fixed const & rhs) const ;
    Fixed   operator-(Fixed const & rhs) const ;
    Fixed   operator*(Fixed const & rhs) const ;
    Fixed   operator/(Fixed const & rhs) const ;

    bool    operator==(Fixed const & rhs) const ;
    bool    operator!=(Fixed const & rhs) const ;
    bool    operator>(Fixed const & rhs) const ;
    bool    operator<(Fixed const & rhs) const ;
    bool    operator>=(Fixed const & rhs) const ;
    bool    operator<=(Fixed const & rhs) const ;

    Fixed & operator++();
    Fixed & operator--();
    Fixed & operator--( int );
    Fixed & operator++( int );
		

	private:
		int _num;
		static int const _fract_bits;
		static float const _factor;
};

std::ostream& operator<<(std::ostream & s, Fixed const & rhs);

# endif /* __FIXED_H__ */