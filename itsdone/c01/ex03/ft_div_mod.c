/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:26:45 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/11 18:26:48 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	dv;
	int	md;
	int	*div;
	int	*mod;

	a = 11;
	b = 3;
	dv = 0;
	md = 0;
	div = &dv;
	mod = &md;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", dv);
	printf("%d\n", md);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", dv);
	printf("%d\n", md);
	return (0);
}*/
