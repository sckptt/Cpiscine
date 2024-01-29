/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:26:52 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:26:53 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	num;
	int				is_negative;

	length = get_num_length(n);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	is_negative = n < 0;
	num = n;
	if (is_negative)
		num = -n;
	while (length > 0)
	{
		length--;
		str[length] = num % 10 + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	str[get_num_length(n)] = '\0';
	return (str);
}
