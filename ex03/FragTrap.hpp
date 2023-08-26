/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:59:26 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 14:02:39 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();//default constractor
        FragTrap(std::string name);// normal constractor
        FragTrap(const FragTrap& other_fragtrap);//copy constractor
        FragTrap& operator=(const FragTrap& other_fragtrap);//copy assignement operator overloading
        ~FragTrap();//destractor

		int getFragTrapHitPoint();
		int getFragTrapAttackDamage();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif