/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:59:53 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:18:23 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(void): name("ClapTrap"), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap):	name(clapTrap.name),
												hp(clapTrap.hp),
												ep(clapTrap.ep),
												ad(clapTrap.ad)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->name = clapTrap.name;
	this->hp = clapTrap.hp;
	this->ep = clapTrap.ep;
	this->ad = clapTrap.ad;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp)
	{
		std::cout << "ClapTrap " << this->name
			<< " attacks " << target << ", ";
		if (this->ep)
		{
			std::cout << "causing " << this->ad << " points of damage!";
			this->ep--;
		}
		else
			std::cout << "but has no more energy points ! Attack fails !!";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp)
	{
		std::cout << "ClapTrap " << this->name << " takes "
			<< amount << " damage !" << std::endl;
		if (amount < this->hp)
			this->hp -= amount;
		else
		{
			std::cout << "ClapTrap " << this->name << " died !" << std::endl;
			this->hp = 0;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp)
	{
		std::cout << "ClapTrap " << this->name << " repairs himself, ";
		if (this->ep)
		{
			std::cout << "regaining " << amount << " hit points !";
			this->hp += amount;
			this->ep--;
		}
		else
			std::cout << "but has not enough energy, repair failed !";
		std::cout << std::endl;
	}
}
