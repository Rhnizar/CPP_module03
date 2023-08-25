/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:29:11 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/25 20:51:59 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap : default constractor called !" << std::endl;
    name = "reda";
    hit_point = getFragTrapHitPoint();
    
}

int DiamondTrap::getFragTrapHitPoint()
{
    return FragTrap::hit_point;
}

int DiamondTrap::getFragTrapAttackDamage()
{
    return FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string namee)
{
    std::cout << "DiamondTrap : constractor called !" << std::endl;
    name = namee;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other_DiamondTrap)
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
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : destractor called !" << std::endl;
}