/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:35:53 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/14 02:57:33 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include<iostream>
#include<string>
#include <sys/_types/_size_t.h>

template<class T>

class Array{
    private:
        T* arr;
        size_t len;
    public:
        Array( void );
        Array( unsigned int n );
        Array( Array const &obj );
        Array &operator=( Array const &obj );
        T &operator[]( unsigned int index ) const;
        ~Array( void );
        size_t size( void ) const;
        T *getAddress( void ) const;
        void setArr( T *adr );
        void setLen( unsigned int len );
        class outOfRange : public std::exception {
            public :
                virtual const char *what() const throw();
        };
};
