/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:00:01 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/23 16:00:04 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char	*name;
	int		i;

	(void) argc;
	i = 0;
	name = argv[0];
	while (name[i] != '\0')
	{
		ft_putchar(name[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
