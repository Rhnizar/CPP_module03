/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/22 11:34:55 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(std::string namee)
{
    name = namee;
}

ClapTrap::ClapTrap(std::string namee, int hp, int ep, int ad)
{
    name = namee;
    hit_point = hp;
    energy_point = ep;
    attack_damage = ad;
}

ClapTrap::ClapTrap(const ClapTrap& other_claptrap)
{
    *this = other_claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other_claptrap)
{
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
{}

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
    std::cout <<" ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}
