/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:03:10 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/22 14:03:12 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(void)
{
	printf("%d\n", ft_recursive_power(1, -1));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-5, 2));
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(2, 0));
	return (0);
}*/
