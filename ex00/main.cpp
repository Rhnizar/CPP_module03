/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:33:20 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/25 15:50:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap r1;
    ClapTrap r2("ClapTrap2");

    r1.attack("ClapTrap2");
    r1.takeDamage(5);
    r1.attack("ClapTrap2");
    r1.takeDamage(4);
    r1.beRepaired(5);
    r1.attack("ClapTrap2");
}