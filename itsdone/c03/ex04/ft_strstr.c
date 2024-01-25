/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:22:06 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/17 16:29:29 by vkinsfat         ###   ########.fr       */
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
	while (s1[i] != '\0')
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

char	*ft_strstr(char *str, char *to_find)
{
	int	istr;

	istr = 0;
	if (to_find[0] == '\0')
	{
		return (&str[istr]);
	}
	while (str[istr] != '\0')
	{
		if (ft_strcmp(&to_find[0], &str[istr]) == 0)
		{
			return (&str[istr]);
		}
		else
		{
			istr++;
		}
	}
	return ((void *)0);
}

/*int main(void)
{
	char str[] = "The age of Shadows has begun!";
	char tofind1[] = "Shadows";
	char tofind2[] = "No more";
	char tofind3[] = "";

	printf("%s\n", ft_strstr(str, tofind1));
	printf("%s\n", ft_strstr(str, tofind2));
	printf("%s\n", ft_strstr(str, tofind3));
	printf("%s\n", strstr(str, tofind1));
	printf("%s\n", strstr(str, tofind2));
	printf("%s\n", strstr(str, tofind3));
	return (0);
}*/
