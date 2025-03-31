/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:18:41 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	heimer("Heimer");
	ClapTrap	dinger("Dinger");
	int			i(0);

	std::cout << std::endl;
	heimer.attack("Dinger");
	dinger.takeDamage(0);
	dinger.beRepaired(42);
	std::cout << std::endl;
	std::cout << "A foe pulls out a rocket launcher..." << std::endl;
	heimer.takeDamage(30);
	dinger.takeDamage(30);
	std::cout << std::endl;
	while (i++ < 10)
		dinger.attack("Foe");
	std::cout << std::endl;
	return (0);
}
