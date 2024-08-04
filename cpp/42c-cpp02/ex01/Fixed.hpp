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
 * Add the following public constructors and public member functions to your class:
 * 	• A constructor that takes a constant integer as a parameter.
 * 		It converts it to the corresponding fixed-point value. The fractional bits value is
 * 		initialized to 8 like in exercise 00.
 * 	• A constructor that takes a constant floating-point number as a parameter.
 * 		It converts it to the corresponding fixed-point value. The fractional bits value is
 * 		initialized to 8 like in exercise 00.
 * 	• A member function float toFloat( void ) const;
 * 		that converts the fixed-point value to a floating-point value.
 * 	• A member function int toInt( void ) const;
 * 		that converts the fixed-point value to an integer value.
 * 		And add the following function to the Fixed class files:
 * 	• An overload of the insertion («) operator that inserts a floating-point representation
 * 		of the fixed-point number into the output stream object passed as parameter.
*/

#pragma once
#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>


class Fixed {
	public:
		Fixed( void );
		Fixed( int const num );
		Fixed( float const num );
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed & operator=(Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		

	private:
		int _num;
		static int const _fract_bits;
		static int const _factor;
};

std::ostream& operator<<(std::ostream & s, Fixed const & rhs);

# endif /* __FIXED_H__ */