/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:31:53 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/16 18:31:56 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	source[100] = "of Eldraine";
	char	destination[100] = "Wilds ";
	char	source1[100] = "of Eldraine";
	char	destination1[100] = "Wilds ";

	printf("%s\n", destination);
	ft_strcat(destination, source);
	printf("Reproduced: %s\n", destination);
	strcat(destination1, source1);
	printf("Original: %s\n", destination1);
	return (0);
}*/
