/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_three_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:42 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:43 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	handle_hundred(int hundreds, char *str, t_nbr **dict)
{
	char	*itoa_tmp;

	itoa_tmp = ft_itoa(hundreds);
	ft_strcat(str, find_in_dict(dict, itoa_tmp));
	ft_strcat(str, " ");
	ft_strcat(str, find_in_dict(dict, "100"));
	ft_strcat(str, " ");
	free(itoa_tmp);
}

void	handle_tens_ones(int tens, int ones, char *str, t_nbr **dict)
{
	char	*itoa_tmp;

	if (tens == 1)
	{
		itoa_tmp = ft_itoa(10 + ones);
		ft_strcat(str, find_in_dict(dict, itoa_tmp));
		if (str + 1 != NULL)
			ft_strcat(str, " ");
		free(itoa_tmp);
		return ;
	}
	if (tens > 1)
	{
		itoa_tmp = ft_itoa(tens * 10);
		ft_strcat(str, find_in_dict(dict, itoa_tmp));
		ft_strcat(str, " ");
		free(itoa_tmp);
	}
	if (ones > 0)
	{
		itoa_tmp = ft_itoa(ones);
		ft_strcat(str, find_in_dict(dict, itoa_tmp));
		free(itoa_tmp);
	}
}

char	**map_three_digits(t_nbr **dict, char **nb_arr)
{
	char	**wrt_arr;
	int		i;

	wrt_arr = (char **) malloc(sizeof(char *) * (ft_arraylen(nb_arr) + 1));
	i = 0;
	while (nb_arr[i])
	{
		wrt_arr[i] = (char *) malloc(sizeof(char) * 1000);
		if (!wrt_arr[i])
		{
			while (i > 0)
				free(wrt_arr[--i]);
			free(wrt_arr);
			return (NULL);
		}
		wrt_arr[i][0] = '\0';
		if ((ft_atoi(nb_arr[i]) / 100) > 0)
			handle_hundred((ft_atoi(nb_arr[i]) / 100), wrt_arr[i], dict);
		handle_tens_ones(((ft_atoi(nb_arr[i]) % 100) / 10),
			(ft_atoi(nb_arr[i]) % 10), wrt_arr[i], dict);
		i++;
	}
	wrt_arr[i] = NULL;
	return (wrt_arr);
}
