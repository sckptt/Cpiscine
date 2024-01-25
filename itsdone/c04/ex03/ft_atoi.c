/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:28:58 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/19 20:29:00 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	one;
	int	res;

	i = 0;
	one = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			one *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * one);
}

/*int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = " --+245632";
	test2 = "     ++-+4242b23";
	printf("%d\n", ft_atoi(test1));
	printf("%d\n", ft_atoi(test2));
	return (0);
}*/
