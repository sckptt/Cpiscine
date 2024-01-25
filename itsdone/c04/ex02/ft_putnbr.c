/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:13:22 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/18 16:13:27 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

// int main(void)
// {
// 	int num1;
// 	int num2;

// 	num1 = 12345;

// 	num2 = -2147483648;
// 	ft_putnbr(num2);
// 	printf("%c", '\n');
// 	ft_putnbr(-785748934);
// 	printf("%c", '\n');
// 	ft_putnbr(num1);
// 	printf("%c", '\n');
// 	return (0);
// }
