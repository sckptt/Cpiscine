/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:26:21 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:26:22 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*find_in_dict(t_nbr **dict, char *key)
{
	t_nbr	*current;
	int		i;

	i = 0;
	while (dict[i] != NULL)
	{
		current = dict[i];
		if (ft_strcmp(current->numeric, key) == 0)
			return (current->written);
		i++;
	}
	return (NULL);
}
