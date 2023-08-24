/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:38:16 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/24 14:02:17 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : name("reda"), hit_point(101), energy_point(50), attack_damage(20)
{
    // std::cout << "default constractor ScavTrap called !" << std::endl;
}

ScavTrap::ScavTrap(std::string namee)
{
    // std::cout << "constractor called !" << std::endl;
    name = namee;
}

ScavTrap::ScavTrap(const ScavTrap& other_scavTrap)
{
    // std::cout << "copy constractor called !" << std::endl;
    *this = other_scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other_scavTrap)
{
    // std::cout << "copy assignement operator overloading called !" << std::endl;
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
    // std::cout << "destractor called !" << std::endl;
}

std::string ScavTrap::getName()
{
    return name;
}
/*implement the functions attack && takeDamaeg && beRepaired */

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

void ScavTrap::takeDamage(unsigned int amount)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        hit_point -= amount;
        std::cout <<" ScavTrap " << name << " take with " << amount << " point of damage and the current hit point is " << hit_point << std::endl;
    }
    else
        std::cout <<" ScavTrap " << name << " dosen't have enough hit point to take damage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (energy_point >= 1 && hit_point > 0)
    {
        hit_point += amount;
        energy_point--;
        std::cout <<" ScavTrap " << name << " repairs itself with " << amount << " point of damage and the current hit point is " << hit_point << std::endl;
    }
    else
        std::cout <<" ScavTrap " << name << " dosen't have enough energy point to beRepaired !" << std::endl;
}
