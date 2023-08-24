/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/24 13:14:46 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constractor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string namee, int hp, int ep, int ad)
{
    std::cout << "constractor called !" << std::endl;
    name = namee;
    hit_point = hp;
    energy_point = ep;
    attack_damage = ad;
}

ClapTrap::ClapTrap(const ClapTrap& other_claptrap)
{
    std::cout << "copy constractor called !" << std::endl;
    *this = other_claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other_claptrap)
{
    std::cout << "copy assignement operator overloading called !" << std::endl;
    if (this != &other_claptrap)
    {
        name = other_claptrap.name;
        hit_point = other_claptrap.hit_point;
        energy_point = other_claptrap.energy_point;
        attack_damage = other_claptrap.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destractor called !" << std::endl;
}


/*implement the functions attack && takeDamaeg && beRepaired */

void ClapTrap::attack(const std::string& target)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        energy_point--;
        std::cout <<" ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout <<" ClapTrap " << name << " dosen't have enough energy to attack !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        hit_point -= amount;
        std::cout <<" ClapTrap " << name << " take with " << amount << " point of damage and the current hit point is " << hit_point << std::endl;
    }
    else
        std::cout <<" ClapTrap " << name << " dosen't have enough hit point to take damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        hit_point += amount;
        energy_point--;
        std::cout <<" ClapTrap " << name << " repairs itself with " << amount << " point of damage and the current hit point is " << hit_point << std::endl;
    }
    else
        std::cout <<" ClapTrap " << name << " dosen't have enough energy point to beRepaired !" << std::endl;
}
