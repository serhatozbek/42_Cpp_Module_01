/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:01:27 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:01:27 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
  std::cout << "----Testing newZombie(heap)----" << std::endl;

  Zombie* zombieFromHeap = newZombie("HeapFoo");
  zombieFromHeap->announce();

  std::cout << "----Testing randomChump(stack)----" << std::endl;
  randomChump("StackBar");

  std::cout << "----Manuel Deleting heap zombie----" << std::endl;

    delete zombieFromHeap;

    std::cout << "----End of the program----" << std::endl;
    return 0;
}