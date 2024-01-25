/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:02:17 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/22 14:02:21 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;
	int	help;

	res = 1;
	help = 1;
	if (nb == 1)
		return (1);
	while (res <= nb / 2 || res <= 46340)
	{
		help = res * res;
		if (help == nb)
		{
			return (res);
		}
		res++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(42));
	printf("%d\n", ft_sqrt(2147395600));
	return (0);
}*/