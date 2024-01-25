/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:32 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/11 17:47:37 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	third;

	third = *a;
	*a = *b;
	*b = third;
}

/*int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 11;
	num2 = 22;
	a = &num1;
	b = &num2;
	printf("%d\n", num1);
	printf("%d\n", num2);
	ft_swap(a, b);
	printf("%d\n", num1);
	printf("%d\n", num2);
	return (0);
}*/
