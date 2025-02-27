/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:32:52 by pokpalae          #+#    #+#             */
/*   Updated: 2025/02/27 13:34:32 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator easyfind(T  &arr, int value) {
    typename T::iterator it = std::find(arr.begin(), arr.end(), value);
    if (it == arr.end()) {
        throw NoValueException();
}
    return it;
}

