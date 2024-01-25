/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:05:32 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/13 20:05:36 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
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

	str = "I have pr1nt@ble chars only ~ ^";
	printf("The flag is:" "%d\n", ft_str_is_printable(str));
	str1 = "ст@нд@рт кодnp0ванnя латnнск0г0 алфавита";
	printf("The flag is:" "%d\n", ft_str_is_printable(str1));
	str0 = "";
	printf("The flag is:" "%d\n", ft_str_is_printable(str0));
	return (0);
}*/
