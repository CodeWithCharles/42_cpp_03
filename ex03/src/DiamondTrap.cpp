/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:31:13 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:09:32 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap(void):
	ClapTrap("Unnamed_clap_name", 100, 50, 30), _name("Unnamed")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name):
	ClapTrap(name, 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap):
	ClapTrap(diamondTrap), _name(diamondTrap._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->ClapTrap::_name = diamondTrap.ClapTrap::_name;
	this->_hp = diamondTrap._hp;
	this->_ep = diamondTrap._ep;
	this->_ad = diamondTrap._ad;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hp)
		std::cout << "My name is:  " << this->_name
			<< ". My clap name is: " << this->ClapTrap::_name << std::endl;
}
