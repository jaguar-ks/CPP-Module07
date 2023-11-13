/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:13:26 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/13 05:15:59 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b){
    return a < b ? a : b;
}

template <typename T>
T max(T a, T b){
    return a > b ? a : b;
}
