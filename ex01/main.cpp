/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:00:59 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:00:59 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(){
    const int horde_size = 10;
    std::cout << "--- Creating a horde of " << horde_size << " zombies! ---" << std::endl;

    Zombie* myHorde= zombieHorde(horde_size, "Horde");

    std::cout << "\n--- The horde announces itself! ---" << std::endl;

    for (int i = 0; i < horde_size; i++)
    {
        myHorde[i].announce();
    }
        std::cout << "\n--- Destroying the horde! ---" << std::endl;
    delete[] myHorde;
    return 0;
    

    // std::cout << "----Creating a horde of " << N << " zombies named " << name << "----" << std::endl;
    // Zombie* horde = zombieHorde(N, name);

    // std::cout << "----Announcing the horde----" << std::endl;
    // for (int i = 0; i < N; i++) {
    //     horde[i].announce();
    // }

    // std::cout << "----Deleting the horde----" << std::endl;
    // delete[] horde;

    // std::cout << "----End of the program----" << std::endl;
    // return 0;
}