/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:41:26 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/11 18:41:31 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div1;
	int	div2;

	div1 = *a;
	div2 = *b;
	*a = div1 / div2;
	*b = div1 % div2;
}

/*int	main(void)
{
	int	fst;
	int	scd;
	int	*a;
	int	*b;

	fst = 11;
	scd = 3;
	a = &fst;
	b = &scd;
	printf("%d\n", fst);
	printf("%d\n", scd);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", fst);
	printf("%d\n", scd);
	return (0);
}*/
