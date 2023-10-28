/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <kel-baam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:03:16 by kel-baam          #+#    #+#             */
/*   Updated: 2023/10/28 18:29:55 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const std::string& type);
        Brain(const Brain &obj);
        Brain& operator=(const Brain&obj);
        ~Brain();
};

#endif