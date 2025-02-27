/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:22:25 by pokpalae          #+#    #+#             */
/*   Updated: 2025/02/27 13:28:47 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  EASYFIND_HPP
#define  EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>
#include <vector>


class NoValueException : public std::exception {
	public:
		virtual const char *	what() const throw();
};

template<typename T>
typename T::iterator easyfind(T const &arr, int value);

#include "../srcs/easyfind.tpp"

#endif
