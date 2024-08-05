/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:07:00 by marvin            #+#    #+#             */
/*   Updated: 2024/05/04 19:07:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>

class   Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain &copy);
        Brain& operator=(const Brain &copy);
        ~Brain();
};
