/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:53:55 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:12:04 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hp;
		unsigned int	ep;
		unsigned int	ad;
	public:
/* ------------------------------ Constructors ------------------------------ */
		ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap(const std::string &name);
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
