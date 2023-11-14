/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 02:30:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/14 03:13:38 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <exception>
#include <sys/_types/_size_t.h>

// void f(){
//     system("leaks ex02");
// }

int main(){
    // atexit(f);
    {
        Array<std::string> arr(3);
        std::cout << "Array size :" << arr.size() << std::endl;
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << ' ';
        std::cout << std::endl;
        arr[0] = "hello";
        arr[1] = "world";
        arr[2] = "!";
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << ' ';
        Array<std::string> arr1 = arr;
        std::cout << std::endl;
        for (unsigned int i = 0; i < arr1.size(); i++)
            std::cout << arr1[i] << ' ';
        std::cout << std::endl;
        try {
            std::cout << arr[5];
        }
        catch(std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }
    {
        Array<int> ar;
        std::cout << "Array address is: " << ar.getAddress() << std::endl;
        ar.setArr(new int[10]());
        std::cout << "Array address is: " << ar.getAddress() << std::endl;
        ar.setLen(10);
        for (size_t i = 0; i < ar.size(); i++)
            std::cout << ar[i] << std::endl;
        Array<int> ar1(ar);
        std::cout << "Array size is : " << ar1.size() << std::endl;
        for (size_t i = 0; i < ar1.size(); i++)
            std::cout << ar1[i] << std::endl;
    }
}
