/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:49:05 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/13 19:49:12 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
		{
			str++;
		}
		else
		{
			flag = 0;
			str++;
		}
	}
	return (flag);
}

/*int	main(void)
{
	char	*str;
	char	*str1;
	char	*str0;

	str = "1one2two3three4four5five";
	printf("The flag is:" "%d\n", ft_str_is_numeric(str));
	str1 = "12345";
	printf("The flag is:" "%d\n", ft_str_is_numeric(str1));
	str0 = "";
	printf("The flag is:" "%d\n", ft_str_is_numeric(str0));
	return (0);
}*/
