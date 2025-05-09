/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:31:13 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:00:19 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap(void):
	ClapTrap("Unnamed", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name):
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap):
	ClapTrap(scavTrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	this->_name = scavTrap._name;
	this->_hp = scavTrap._hp;
	this->_ep = scavTrap._ep;
	this->_ad = scavTrap._ad;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp)
		std::cout << "ScavTrap " << this->_name
			<< " is now in Gate Keeper mode !" << std::endl;
}
