/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:09:19 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/14 01:19:48 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
template<typename T>

void iter(T *arr, size_t len, void (*f)(T&)){
    if (arr)
        for (size_t i = 0; i < len; i++)
            f(arr[i]);
}
