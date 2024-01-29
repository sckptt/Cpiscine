/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:59:53 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/24 16:59:55 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dup;

	i = 0;
	size = ft_strlen(src) + 1;
	dup = (char *) malloc(size);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int main(void)
{
	char *string;

	string = "Don't stop me now";
	printf("%s", ft_strdup(string));
	return (0);
}*/
