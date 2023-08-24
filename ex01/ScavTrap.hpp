/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:42:22 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/24 14:01:03 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		std::string name;
        int         hit_point;
        int         energy_point;
        int         attack_damage;
	public :
    	ScavTrap();
		ScavTrap(std::string name);// normal constractor
        ScavTrap(const ScavTrap& other_scavTrap);//copy constractor
        ScavTrap& operator=(const ScavTrap& other_scavTrap);//copy assignement operator overloading
        ~ScavTrap();//destractor
		
		std::string getName();
		void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif