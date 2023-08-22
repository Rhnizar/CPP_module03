/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/22 12:28:29 by rrhnizar         ###   ########.fr       */
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

std::string ClapTrap::getName()
{
    return name;
}

void    ClapTrap::setName(std::string namee)
{
    name = namee;
}

int     ClapTrap::getHit_point()
{
    return hit_point;
}

void    ClapTrap::setHit_point(int hp)
{
    hit_point = hp;
}

int     ClapTrap::getEnergy_point()
{
    return energy_point;
}

void    ClapTrap::setEnergy_point(int ep)
{
    energy_point = ep;
}

int     ClapTrap::getAttack_damage()
{
    return attack_damage;
}

void    ClapTrap::setAttack_damege(int ad)
{
    attack_damage = ad;
}


void ClapTrap::attack(const std::string& target)
{
    if (energy_point >= 1)
    {
        energy_point--;
        std::cout <<" ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "dosen't have enough energy to attack !" << std::endl;
}

// void ClapTrap::takeDamage(unsigned int amount)
// {

// }

// void ClapTrap::beRepaired(unsigned int amount)
// {

// }