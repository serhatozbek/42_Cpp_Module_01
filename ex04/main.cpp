/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.kocaeli.42.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 00:00:04 by sozbek            #+#    #+#             */
/*   Updated: 2025/09/08 03:06:21 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av){
    
    if(ac != 4)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;

        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if(s1.empty())
    {
        std::cerr << "Error: The string to be replaced (s1) cannot be empty" << std::endl;
        return 1;
    }
    if (s1 == s2) {
        std::cout << "s1 and s2 are identical. No replacement needed." << std::endl;
        return 0;
    }
    
    std::ifstream inputFile(filename.c_str());
    if(!inputFile.is_open())
    {
        std::cerr << "Error: Could not open input file '" << filename << "'" << std::endl;
        return 1;
    }
    std::string line;
    std::string content;

    while (std::getline(inputFile, line)) {
        content += line;
        if (!inputFile.eof()) {
            content += "\n";
        }
    }
    inputFile.close();
    
    size_t pos = 0;
    while ((pos = content.find(s1,pos)) != std::string::npos)
    {
        content.erase(pos,s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outputFile(outFilename.c_str());
    if(!outputFile.is_open())
    {
        std::cerr << "Error: Could not create output file '" << outFilename << "'" << std::endl;
        return 1;
    }

    outputFile << content;
    outputFile.close();

    std::cout << "File '" << filename << "' processed successfully. Output written to '" << outFilename << "'." << std::endl;

    return 0;
}