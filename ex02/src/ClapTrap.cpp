/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:59:53 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:33:57 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(void):	_name("Unnamed"),
							_hp(10),
							_ep(10),
							_ad(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap):	_name(clapTrap._name),
												_hp(clapTrap._hp),
												_ep(clapTrap._ep),
												_ad(clapTrap._ad)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):	_name(name),
												_hp(10),
												_ep(10),
												_ad(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(
	const std::string &name,
	const unsigned int hp,
	const unsigned int ep,
	const unsigned int ad):
	_name(name),
	_hp(hp),
	_ep(ep),
	_ad(ad)
{
	std::cout << "ClapTrap full constructor called" << std::endl;
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
	this->_name = clapTrap._name;
	this->_hp = clapTrap._hp;
	this->_ep = clapTrap._ep;
	this->_ad = clapTrap._ad;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp)
	{
		std::cout << "ClapTrap " << this->_name
			<< " attacks " << target << ", ";
		if (this->_ep)
		{
			std::cout << "causing " << this->_ad << " points of damage!";
			this->_ep--;
		}
		else
			std::cout << "but has no more energy points ! Attack fails !!";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " takes "
			<< amount << " damage !" << std::endl;
		if (amount < this->_hp)
			this->_hp -= amount;
		else
		{
			std::cout << "ClapTrap " << this->_name << " died !" << std::endl;
			this->_hp = 0;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " repairs himself, ";
		if (this->_ep)
		{
			std::cout << "regaining " << amount << " hit points !";
			this->_hp += amount;
			this->_ep--;
		}
		else
			std::cout << "but has not enough energy, repair failed !";
		std::cout << std::endl;
	}
}
