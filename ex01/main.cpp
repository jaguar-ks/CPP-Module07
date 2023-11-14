/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 01:14:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/14 01:27:47 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include <string>

void incriment(int &i){
    i++;
}

void to_up(std::string &str){
    for (size_t i = 0; i < str.size(); i++)
        str[i] = std::toupper(str[i]);
}

int main(){
    int intAar[4] = {1,2,3,4};
    std::string strAar[4] = {"This", "string", "will be", "uppercase"};
    ::iter(intAar, 4, incriment);
    ::iter(strAar, 4, to_up);
    for (int i = 0; i < 4; i++)
        std::cout << intAar[i] << std::endl;
    for (int i = 0; i < 4; i++)
        std::cout << strAar[i] << ' ';
}
