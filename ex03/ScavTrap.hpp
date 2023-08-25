/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:42:22 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/25 19:34:24 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
    	ScavTrap();
		ScavTrap(std::string name);// normal constractor
        ScavTrap(const ScavTrap& other_scavTrap);//copy constractor
        ScavTrap& operator=(const ScavTrap& other_scavTrap);//copy assignement operator overloading
        ~ScavTrap();//destractor

		int	getEnegyPoint();
		void attack(const std::string& target);
        void guardGate();
};


#endif