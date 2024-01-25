/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:12:41 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/18 16:12:44 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

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

/*int main(void)
{
	char *string;

	string = "I see a red door and I want it painted black";
	printf("Reproduced: %d\n", ft_strlen(string));
	printf("Original: %lu\n", strlen(string));
	return (0);
}*/
