/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:48:40 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/13 19:48:44 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
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

	str = "imdefinetelylowercase";
	printf("The flag is:" "%d\n", ft_str_is_lowercase(str));
	str1 = "imthelowerCASEBELIEVEME";
	printf("The flag is:" "%d\n", ft_str_is_lowercase(str1));
	str0 = "";
	printf("The flag is:" "%d\n", ft_str_is_lowercase(str0));
	return (0);
}*/
