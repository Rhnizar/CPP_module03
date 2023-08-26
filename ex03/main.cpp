/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:33:20 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/08/26 19:24:52 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt("test");
	dt.setName("rida");
	// dt.setName("aaa");
	// dt.attack();
	// dt.whoAmI();
	std::cout << dt.get_energypoint() << std::endl;
	dt.whoAmI();
	return 0;
}
