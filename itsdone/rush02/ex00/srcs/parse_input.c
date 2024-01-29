/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:55 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:56 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	**parse_input(char *str)
{
	char	**parsed;
	int		first_group_size;
	int		num_groups;
	int		i;

	num_groups = (ft_strlen(str) + 2) / 3;
	first_group_size = ft_strlen(str) % 3;
	if (first_group_size == 0)
		first_group_size = 3;
	if (ft_strlen(str) < 3)
		first_group_size = ft_strlen(str);
	parsed = (char **)malloc((num_groups + 1) * sizeof(char *));
	parsed[0] = (char *)malloc((first_group_size + 1) * sizeof(char));
	ft_strncpy_nt(parsed[0], str, first_group_size);
	i = 1;
	while (i < num_groups)
	{
		parsed[i] = (char *)malloc(4 * sizeof(char));
		ft_strncpy_nt(parsed[i], &str[first_group_size], 3);
		first_group_size += 3;
		i++;
	}
	parsed[num_groups] = NULL;
	return (parsed);
}
