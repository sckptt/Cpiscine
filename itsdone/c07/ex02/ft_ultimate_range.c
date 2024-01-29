/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:00:27 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/24 17:00:30 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*trange;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	i = 0;
	trange = (int *) malloc(size * 4);
	if (trange == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = trange;
	while (i < size)
	{
		trange[i] = min + i;
		i++;
	}
	return (size);
}

/*int main(void)
{
	int *test;

	printf("%d", ft_ultimate_range(&test, 5, 2147483647));
	return (0);
}*/
