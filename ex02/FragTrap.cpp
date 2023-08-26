/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:59:20 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 20:50:02 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap : default constractor called !" << std::endl;
    name = "reda";
    hit_point = 100;
    energy_point = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(std::string namee) : ClapTrap(namee)
{
    std::cout << "FragTrap : constractor called !" << std::endl;
    hit_point = 100;
    energy_point = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other_FragTrap) : ClapTrap(other_FragTrap)
{
    std::cout << "FragTrap : copy constractor called !" << std::endl;
    *this = other_FragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap& other_FragTrap)
{
    std::cout << "FragTrap : copy assignement operator overloading called !" << std::endl;
    if (this != &other_FragTrap)
    {
        name = other_FragTrap.name;
        hit_point = other_FragTrap.hit_point;
        energy_point = other_FragTrap.energy_point;
        attack_damage = other_FragTrap.attack_damage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : destractor called !" << std::endl;
}

/*implement the functions attack && highFivesGuys */

void FragTrap::attack(const std::string& target)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        energy_point--;
        std::cout <<" FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout <<" FragTrap " << name << " dosen't have enough energy to attack !" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "displays a positive high fives request on the standard output." << std::endl;
}
