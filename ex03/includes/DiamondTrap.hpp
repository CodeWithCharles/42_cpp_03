/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:06:43 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:14:15 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
/* ------------------------------ Constructors ------------------------------ */
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &diamondTrap);
/* ------------------------------- Destructors ------------------------------ */
		~DiamondTrap(void);
/* ---------------------- Assignement operator overload --------------------- */
		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);
/* ----------------------------- Public methods ----------------------------- */
		using	ScavTrap::attack;
		void	whoAmI(void);
};

#endif
