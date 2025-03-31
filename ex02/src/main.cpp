/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:03:30 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	FragTrap	heimer("Heimer");
	ScavTrap	dinger("Dinger");
	int			i(0);

	std::cout << std::endl;
	heimer.attack("Dinger");
	dinger.takeDamage(20);
	dinger.beRepaired(42);
	dinger.guardGate();
	heimer.highFiveGuys();
	std::cout << std::endl;
	std::cout << "A foe pulls out a rocket launcher..." << std::endl;
	heimer.takeDamage(100);
	dinger.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 50)
		dinger.attack("Foe");
	std::cout << std::endl;
	return (0);
}
