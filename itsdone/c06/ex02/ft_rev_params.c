/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:00:29 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/23 16:00:32 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(int ac, char *av[])
{
	char	**params;
	int		i;
	int		j;

	j = 0;
	i = ac - 1;
	params = av++;
	while (i > 0)
	{
		while (params[i][j] != '\0')
		{
			ft_putchar(params[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
}

int	main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
