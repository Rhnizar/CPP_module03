/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:43:17 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 20:44:13 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap : default constractor called !" << std::endl;
    name = "reda";
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(std::string namee) : ClapTrap(namee)
{
    std::cout << "ScavTrap : constractor called !" << std::endl;
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other_scavTrap) : ClapTrap(other_scavTrap)
{
    std::cout << "ScavTrap : copy constractor called !" << std::endl;
    *this = other_scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other_scavTrap)
{
    std::cout << "ScavTrap : copy assignement operator overloading called !" << std::endl;
    if (this != &other_scavTrap)
    {
        name = other_scavTrap.name;
        hit_point = other_scavTrap.hit_point;
        energy_point = other_scavTrap.energy_point;
        attack_damage = other_scavTrap.attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : destractor called !" << std::endl;
}

/*implement the functions attack && guardGate */

void ScavTrap::attack(const std::string& target)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        energy_point--;
        std::cout <<" ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout <<" ScavTrap " << name << " dosen't have enough energy to attack !" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}