/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:24:10 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/25 14:24:13 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

int	total_size(char **strs, int size, char *sep)
{
	int	total_size;
	int	i;

	total_size = 1 + (ft_strlen(sep) * (size - 1));
	i = 0;
	while (size > 0)
	{
		total_size += ft_strlen(strs[i]);
		size--;
		i++;
	}
	return (total_size);
}

char	*ft_new_strcat(char *dest, char *src, char *sep, int flag)
{
	int	idest;
	int	i;

	idest = 0;
	i = 0;
	while (dest[idest] != '\0')
		idest++;
	if (flag)
	{
		while (sep[i] != '\0')
		{
			dest[idest] = sep[i];
			idest++;
			i++;
		}
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[idest] = src[i];
		idest++;
		i++;
	}
	dest[idest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;
	int		i;

	total = total_size(strs, size, sep);
	i = 0;
	result = (char *) malloc(total);
	result[0] = '\0';
	while (i < size)
	{
		result = ft_new_strcat(result, strs[i], sep, i);
		i++;
	}
	return (result);
}

/*int main(void)
{
	char *separator = "-";
	char *strings[] = {"", "Hello", "", "world"};
	int size = 4;

	printf("%s\n", ft_strjoin(size, strings, separator));

	char *separator1 = "~~";
	char *strings1[] = {"", "Candy", "", "Coated", "", "Suicide"};
	int size1 = 6;

	printf("%s\n", ft_strjoin(size1, strings1, separator1));
	return (0);
}*/
