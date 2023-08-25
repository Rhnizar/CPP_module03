/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:29:15 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/25 20:50:37 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		int getFragTrapHitPoint();
		int getFragTrapAttackDamage();
		DiamondTrap();//default constractor
        DiamondTrap(std::string name);// normal constractor
        DiamondTrap(const DiamondTrap& other_DiamondTrap);//copy constractor
        DiamondTrap& operator=(const DiamondTrap& other_DiamondTrap);//copy assignement operator overloading
        ~DiamondTrap();//destractor
};

#endif