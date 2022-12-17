/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:42:19 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/17 22:02:46 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::cout << "\e[33;1mThis exercise is to learn about References.\nA reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object.\nA reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e., the compiler will apply the * operator for you.\e[m\n\n" << std::endl;
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\e[3;2mtype                   : address     : value\e[m" << std::endl;
    std::cout << "std::string Variable   : " << &str       << " : " << str        << std::endl;
    std::cout << "Pointer to the above   : " << stringPTR  << " : " << *stringPTR << std::endl;
    std::cout << "Reference to the above : " << &stringREF << " : " << stringREF  << std::endl;

    return 0;
}
