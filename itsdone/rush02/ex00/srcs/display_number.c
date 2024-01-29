/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:12 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:13 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include "ft.h"

int	scale_up(t_nbr **dict, char **wrt_arr)
{
	int		i;
	char	current[100];

	ft_strcpy(current, "1000");
	i = ft_arraylen(wrt_arr) - 2;
	while (i >= 0)
	{
		if (!(find_in_dict(dict, current)))
			return (0);
		if (ft_strcmp(wrt_arr[i], "") != 0)
		{
			ft_strcat(wrt_arr[i], " ");
			ft_strcat(wrt_arr[i], find_in_dict(dict, current));
			ft_strcat(wrt_arr[i], " ");
		}
		ft_strcat(current, "000");
		i--;
	}
	return (1);
}

bool	check_zero(t_nbr **dict, char **nb_arr)
{
	bool	all_zero;
	int		i;

	i = 0;
	while (nb_arr[0][i] != '\0')
	{
		all_zero = true;
		if (nb_arr[0][i] - '0' != 0)
		{
			all_zero = false;
			break ;
		}
		i++;
	}
	if (all_zero)
	{
		ft_putstr(find_in_dict(dict, "0"));
		ft_putstr("\n");
	}
	return (all_zero);
}

void	display_number(t_nbr **dict, char **nb_arr)
{
	char	**wrt_arr;
	int		i;
	char	*str;
	char	*final_string;

	if (check_zero(dict, nb_arr))
		return ;
	wrt_arr = map_three_digits(dict, nb_arr);
	if (!wrt_arr)
		return ;
	if (!(scale_up(dict, wrt_arr)))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	i = 0;
	str = ft_strjoin(ft_arraylen(wrt_arr), wrt_arr, "");
	final_string = sanitize_output(str);
	destroy_strings(wrt_arr);
	ft_putstr(final_string);
	ft_putstr("\n");
	free(str);
	free(final_string);
}
