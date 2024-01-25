/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:02:39 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/22 14:02:42 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int main(void)
{
	// printf("%d\n", ft_is_prime(2));
	// printf("%d\n", ft_is_prime(23));
	// printf("%d\n", ft_is_prime(146811029));
	printf("%d\n", ft_is_prime(1971178327));
	// printf("%d\n", ft_is_prime(-5));
	return (0);
}
