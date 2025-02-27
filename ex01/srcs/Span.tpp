/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:41:16 by pokpalae          #+#    #+#             */
/*   Updated: 2025/02/27 13:41:18 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename InputIterator>
void Span::addNumber_2(InputIterator begin, InputIterator end) {
    if (std::distance(begin, end) > static_cast<int>(input_maxSize - input_array.size())) {
        throw MaxNumbersException();
    }
    input_array.insert(input_array.end(), begin, end);
}
