/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:31:13 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:01:56 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap(void):
	ClapTrap("Unnamed", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name):
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap):
	ClapTrap(FragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

FragTrap	&FragTrap::operator=(const FragTrap &FragTrap)
{
	this->_name = FragTrap._name;
	this->_hp = FragTrap._hp;
	this->_ep = FragTrap._ep;
	this->_ad = FragTrap._ad;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_hp)
		std::cout << "FragTrap " << this->_name
			<< " gives you a high five !" << std::endl;
}
