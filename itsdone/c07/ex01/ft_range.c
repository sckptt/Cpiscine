/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:00:08 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/24 17:00:11 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	size = max - min;
	i = 0;
	range = (int *) malloc(size * 4);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int main(void)
{
	int *result;
	int i;

	result = ft_range(0, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", result[i]);
		i++;
	}
	i = 0;
	return (0);
}*/
