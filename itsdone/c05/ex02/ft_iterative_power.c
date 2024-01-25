/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:12:11 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/20 18:12:13 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		if (power == 1)
		{
			return (res);
		}
		else
		{
			res *= nb;
			power--;
		}
	}
	return (res);
}

/*int main(void)
{
	printf("%d\n", ft_iterative_power(1, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-5, 2));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	return (0);
}*/
