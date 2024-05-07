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

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class   Brain {
    private :
    
    public :
        Brain();
        Brain(const Brain &copy);
        void operator=(const Brain &copy);
        ~Brain();
        std::string ideas;
};

#endif