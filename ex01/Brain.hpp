/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:58:26 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 14:53:38 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#define D		"\033[0m"
#define R		"\033[31m"
#define G		"\033[32m"
#define Y		"\033[33m"
#define B		"\033[34m"

#include <iostream>
#include <string>

class Brain
{
	private:
				std::string ideas[100];

	public:
				Brain();
				Brain(const Brain& original);
				Brain& operator=(const Brain& original);
				~Brain();

				// Method
				void setIdeas(int index, std::string idea);
				std::string getIdeas(int index) const;
};

#endif
