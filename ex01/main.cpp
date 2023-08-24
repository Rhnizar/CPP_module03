/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:33:20 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/24 13:47:03 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap r;

	ScavTrap r2 = ScavTrap("cl1");
	r.attack(r2.getName());
	return 0;
}