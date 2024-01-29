/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:25:33 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:26:04 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	destroy_structs(t_nbr **structs)
{
	int	i;

	i = 0;
	if (structs == NULL)
		return ;
	while (structs[i] != NULL)
	{
		free(structs[i]->numeric);
		free(structs[i]->written);
		free(structs[i]);
		i++;
	}
	free(structs);
}

void	destroy_strings(char **strings)
{
	int	i;

	i = 0;
	if (strings == NULL)
		return ;
	while (strings[i])
		free(strings[i++]);
	free(strings);
}
