/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:28:21 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:15:55 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &scavTrap);
/* ------------------------------- Destructors ------------------------------ */
		~FragTrap(void);
/* ---------------------- Assignement operator overload --------------------- */
		FragTrap	&operator=(const FragTrap &scavTrap);
/* ----------------------------- Public methods ----------------------------- */
		void	highFiveGuys(void);
};

#endif
