/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:48:07 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/13 19:48:11 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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

	str = "Areyouworkingcorrect$E65e5546^";
	printf("The flag is:" "%d\n", ft_str_is_alpha(str));
	str1 = "Youworkcorrect";
	printf("The flag is:" "%d\n", ft_str_is_alpha(str1));
	str0 = "";
	printf("The flag is:" "%d\n", ft_str_is_alpha(str0));
	return (0);
}*/
