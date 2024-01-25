/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:12:01 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/12 18:12:06 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter += 1;
		str++;
	}
	return (counter);
}

/*int	main(void)
{
	char	*string;

	string = "I love MtG";
	printf("%d", ft_strlen(string));
	return (0);
}*/
