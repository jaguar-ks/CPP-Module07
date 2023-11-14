/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 02:00:57 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/14 03:10:18 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"
#include <new>

template<class T>

Array<T>::Array( void ) : arr(NULL), len(0) {}

template<class T>

Array<T>::Array( unsigned int n ) : len(n) {
    this->arr = new T[n]();
}

template<class T>

Array<T>::Array( Array const &obj ){
    *this = obj;
}

template<class T>

Array<T> &Array<T>::operator=( Array<T> const &obj ){
    if (this != &obj){
        this->len = obj.size();
        this->arr = new T[this->len];
        for (size_t i = 0; i < this->len; i++)
            this->arr[i] = obj[i];
    }
    return *this;
}

template<class T>

Array<T>::~Array( void ){
    delete[](this->arr);
}

template<class T>

T &Array<T>::operator[]( unsigned int index ) const {
    if (index < this->len)
        return this->arr[index];
    else
        throw Array<T>::outOfRange();
}

template<class T>

size_t Array<T>::size( void ) const {
    return this->len;
}

template<class T>

const char *Array<T>::outOfRange::what(void) const throw(){
    return "Index out of range";
}

template<class T>

T *Array<T>::getAddress( void ) const{
    return this->arr;
}

template<class T>

void Array<T>::setArr( T *adr ){
    this->arr = adr;
}

template<class T>

void Array<T>::setLen( unsigned int len ) {
    this->len = len;
}
