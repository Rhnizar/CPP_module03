/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:11:43 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 11:29:14 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClassA
{
	protected:
		int	a;
	public:
		ClassA();
		ClassA(int aaa);
		int 	geta();
		void	seta(int aa);
};

int	ClassA::geta()
{
	return a;
}

void	ClassA::seta(int aa)
{
	a = aa;
}

ClassA::ClassA() : a(100) {}
ClassA::ClassA(int aaa)
{
	a = aaa;
}

class ClassB : public ClassA
{
	public :
		ClassB();
		ClassB(int aaa);
};
ClassB::ClassB() : ClassA(){}
ClassB::ClassB(int aaa): ClassA(aaa)
{
	// a = aaa;
}

class ClassC : public ClassA
{
	public:
		ClassC();
		ClassC(int aaa);
};
ClassC::ClassC() : ClassA(){}
ClassC::ClassC(int aaa): ClassA(aaa)
{
	a = aaa;
}

class ClassD : public ClassC, ClassB
{
	public:
		ClassD();
		ClassD(int aaa);
};

// ClassD::ClassD();
ClassD::ClassD(){}
ClassD::ClassD(int aaa)
{
	ClassD::ClassB::a = aaa;
}

int main()
{
	/*this prov for shar data bettwen the objects*/
	// ClassA ca;
	// ca.seta(5);
	// std::cout <<"class a :" << ca.geta() << std::endl;
	// ClassB cb;
	// cb.seta(10);
	// std::cout << "class b :" << cb.geta() << std::endl;
	// std::cout <<"class a :" << ca.geta() << std::endl;
	
	ClassA ca(10);
	ClassB cb(50);
	ClassC cc(50);

	// cb.seta(100);
	// std::cout << "ca : " << ca.geta() << std::endl;
	std::cout << "cb : " << cb.geta() << std::endl;
	// std::cout << "cc : " << cc.geta() << std::endl;
	return 0;
}
