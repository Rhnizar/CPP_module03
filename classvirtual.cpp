/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classvirtual.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:48:35 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 11:51:09 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
using namespace std;
 
class A {
public:
    int x;
};
 
class B : virtual public A {
public:
    int y;
};
 
class C : virtual public A {
public:
    int z;
};
 
class D : public B, public C {
public:
    int w;
};
 
int main() {
    D obj;
    obj.x = 1;  // okay, no ambiguity
    obj.y = 2;  // okay, no ambiguity
    obj.z = 3;  // okay, no ambiguity
    obj.w = 4;  // okay, no ambiguity

	cout << obj.x;
    return 0;
}