/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:32:18 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/16 18:32:23 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idest;
	unsigned int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0' && isrc < nb)
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}

/*int main(void)
{
	char	source[100] = "We Are Forever";
	char	destination[100] = "Age Of Shadows/";
	char	source1[100] = "We Are Forever";
	char	destination1[100] = "Age Of Shadows/";
	unsigned int num;

	num = 6;
	printf("%s\n", destination);
	ft_strncat(destination, source, num);
	printf("Reproduced: %s\n", destination);
	strncat(destination1, source1, num);
	printf("Original: %s\n", destination1);
	return (0);
}*/
