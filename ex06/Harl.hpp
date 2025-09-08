/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 23:59:20 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 23:59:20 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
public:
     Harl();
    ~Harl();
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif