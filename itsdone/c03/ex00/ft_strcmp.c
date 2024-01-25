/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:32:04 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/16 18:32:07 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}
	return (result);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "Emrakul";
	str2 = "Emrakul";
	str3 = "Ulamog";
    str4 = "Hello";
    str5 = "Hello1";
	printf("Reproduced: %d\n", ft_strcmp(str1, str2));
	printf("Reproduced: %d\n", ft_strcmp(str1, str3));
	printf("Reproduced: %d\n", ft_strcmp(str4, str5));
	printf("Original: %d\n", strcmp(str1, str2));
	printf("Original: %d\n", strcmp(str1, str3));
	printf("Original: %d\n", strcmp(str4, str5));
	return (0);
}*/
