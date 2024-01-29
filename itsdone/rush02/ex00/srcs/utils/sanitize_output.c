/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sanitize_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:03 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:04 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*sanitize_output(char *str)
{
	int		length;
	char	*result;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	length = ft_strlen(str);
	result = malloc(length + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')))
			result[j++] = str[i];
		i++;
	}
	if (j > 0 && result[j - 1] == ' ')
		j--;
	result[j] = '\0';
	return (result);
}
