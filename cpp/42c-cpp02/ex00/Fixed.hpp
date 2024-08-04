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
 * Create a class in Orthodox Canonical Form that represents a fixed-point number:
 * • Private members:
 * 	◦ An integer to store the fixed-point number value.
 * 	◦ A static constant integer to store the number of fractional bits. Its value
 * 		will always be the integer literal 8.
 * • Public members:
 * 	◦ A default constructor that initializes the fixed-point number value to 0.
 * 	◦ A copy constructor.
 * 	◦ A copy assignment operator overload.
 * 	◦ A destructor.
 * 	◦ A member function int getRawBits( void ) const;
 * 		that returns the raw value of the fixed-point value.
 * 	◦ A member function void setRawBits( int const raw );
 * 		that sets the raw value of the fixed-point number.
*/

#pragma once
#ifndef __FIXED_H__
# define __FIXED_H__

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed & operator=(Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		

	private:
		int _num;
		static const int _fract_bits = 8;
};

# endif /* __FIXED_H__ */