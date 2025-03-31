/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:53:55 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:38:01 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
	public:
/* ------------------------------ Constructors ------------------------------ */
		ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap(const std::string &name);
		ClapTrap(const std::string &name, const unsigned int hp,
			const unsigned int ep, const unsigned int ad);
/* ------------------------------- Destructors ------------------------------ */
		~ClapTrap(void);
/* ---------------------- Assignement operator overload --------------------- */
		ClapTrap	&operator=(const ClapTrap &clapTrap);
/* ----------------------------- Public methods ----------------------------- */
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
