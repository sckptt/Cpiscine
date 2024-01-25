/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:49:33 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/13 19:49:36 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
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

	str = "IMDEFINETELYUPPERCASE";
	printf("The flag is:" "%d\n", ft_str_is_uppercase(str));
	str1 = "imtheupperCASEBELIEVEME";
	printf("The flag is:" "%d\n", ft_str_is_uppercase(str1));
	str0 = "";
	printf("The flag is:" "%d\n", ft_str_is_uppercase(str0));
	return (0);
}*/
