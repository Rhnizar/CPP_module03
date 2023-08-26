/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:29:11 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 19:25:45 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap : default constractor called !" << std::endl;
    name = "reda";
    hit_point = 100;
    attack_damage = 30;
    energy_point = 50;
}

DiamondTrap::DiamondTrap(std::string namee) : ClapTrap(namee), ScavTrap(namee), FragTrap(namee)
{
    std::cout << "DiamondTrap : constractor called !" << std::endl;
    hit_point = 100;
    attack_damage = 30;
    energy_point = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other_DiamondTrap) : ClapTrap(other_DiamondTrap), ScavTrap(other_DiamondTrap), FragTrap(other_DiamondTrap)
{
    std::cout << "DiamondTrap : copy constractor called !" << std::endl;
    *this = other_DiamondTrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other_DiamondTrap)
{
    std::cout << "DiamondTrap : copy assignement operator overloading called !" << std::endl;
    if (this != &other_DiamondTrap)
    {
        name = other_DiamondTrap.name;
        hit_point = other_DiamondTrap.hit_point;
        energy_point = other_DiamondTrap.energy_point;
        attack_damage = other_DiamondTrap.attack_damage;
        ClapTrap::name = other_DiamondTrap.name + "_clap_name";
        ScavTrap::name = other_DiamondTrap.name;
        FragTrap::name = other_DiamondTrap.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : destractor called !" << std::endl;
}
std::string	DiamondTrap::getName()
{
    return name;
}
void    DiamondTrap::setName(std::string namee)
{
    name = namee;
}
/* function to implement */

void    DiamondTrap::attack()
{
    ScavTrap::attack(name);
}

void DiamondTrap::whoAmI()
{
    std::cout << "name diamondtrap is :  " << name  << "  && name claptrap is : " << ClapTrap::name << std::endl;
}

int DiamondTrap::get_hitpoint()
{
    return hit_point;
}

int DiamondTrap::get_attackdamage()
{
    return attack_damage;
}

int DiamondTrap::get_energypoint()
{
    return energy_point;
}
