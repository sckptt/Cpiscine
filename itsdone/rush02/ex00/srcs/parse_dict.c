/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:49 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:50 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>   // for open
#include <unistd.h>  // for close, read
#include <stdlib.h>
#include "ft.h"

int	check_string(char *string)
{
	while (*string >= '0' && *string <= '9')
		string++;
	if (*string != ':' && *string != ' ')
		return (0);
	while ((*string >= 9 && *string <= 13) || *string == ' ')
		string++;
	if (*string == ':')
	{
		string++;
		while (*string)
		{
			if (*string < 32 || *string > 126)
				return (0);
			string++;
		}
	}
	else
		return (0);
	return (1);
}

int	check_strings(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		if (!(check_string(strings[i])))
			return (0);
		i++;
	}
	return (1);
}

void	pop_tnbr(char **strings, t_nbr **parsed)
{
	int		i;
	char	**split;
	char	*charset;

	i = 0;
	charset = ": ";
	while (strings[i])
	{
		split = ft_split(strings[i], charset);
		parsed[i] = malloc(sizeof(*parsed[i]));
		if (parsed[i] == NULL)
			return ;
		parsed[i]->numeric = split[0];
		parsed[i]->written = split[1];
		free(split);
		i++;
	}
}

t_nbr	**parse_dict(char *filename)
{
	t_nbr	**parsed;
	int		fd;
	char	bf[30000];
	char	**strings;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, bf, 30000);
	strings = ft_split(bf, "\n");
	if (!(check_strings(strings)))
		return (NULL);
	parsed = (t_nbr **) malloc((ft_arraylen(strings) + 1) * sizeof(t_nbr *));
	if (parsed == NULL)
		return (NULL);
	pop_tnbr(strings, parsed);
	close(fd);
	destroy_strings(strings);
	return (parsed);
}
