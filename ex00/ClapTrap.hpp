/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:34:13 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/24 13:13:28 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap{
    private:
        std::string name;
        int         hit_point;
        int         energy_point;
        int         attack_damage;
    public:
    
        ClapTrap();//default constractor
        ClapTrap(std::string name);// normal constractor
        ClapTrap(const ClapTrap& other_claptrap);//copy constractor
        ClapTrap& operator=(const ClapTrap& other_claptrap);//copy assignement operator overloading
        ~ClapTrap();//destractor
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif