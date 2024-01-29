/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:26:29 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:26:30 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_arraylen(char **array)
{
	int	length;

	length = 0;
	while (array[length] != NULL)
	{
		length++;
	}
	return (length);
}
