/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:20:41 by scavalli          #+#    #+#             */
/*   Updated: 2025/05/12 18:57:01 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie = newZombie("greg"); //heap
	Zombie->announce();
	delete(Zombie);
	randomChump("filsdegreg"); //stack
	return 0;
}