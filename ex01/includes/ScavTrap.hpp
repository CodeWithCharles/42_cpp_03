/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:28:21 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 13:31:07 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		ScavTrap(void);
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &scavTrap);
/* ------------------------------- Destructors ------------------------------ */
		~ScavTrap(void);
/* ---------------------- Assignement operator overload --------------------- */
		ScavTrap	&operator=(const ScavTrap &scavTrap);
/* ----------------------------- Public methods ----------------------------- */
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
