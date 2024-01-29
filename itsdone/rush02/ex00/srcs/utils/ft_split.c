/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:27:06 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:27:07 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

bool	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (true);
		i++;
	}
	if (c == '\0')
		return (true);
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_sep(str[i], charset)) && is_sep(str[i + 1], charset))
			total++;
		i++;
	}
	return (total);
}

void	write_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!(is_sep(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		word_total;

	word_total = 0;
	i = 0;
	arr = (char **) malloc((count_words(str, charset) + 1) * sizeof(char *));
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!(is_sep(str[i + j], charset)))
				j++;
			arr[word_total] = (char *) malloc(sizeof(char) * j + 1);
			write_word(arr[word_total], str + i, charset);
			i += j;
			word_total++;
		}
	}
	arr[word_total] = NULL;
	return (arr);
}
