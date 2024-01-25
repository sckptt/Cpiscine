/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinsfat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:08:37 by vkinsfat          #+#    #+#             */
/*   Updated: 2024/01/15 12:08:42 by vkinsfat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	destination[7] = {};
	char	src[] = "Lost Caverns of Ixalan!";
	unsigned int	num;
	char	dest1[20] = {};
	char	src1[] = "Gix";
	unsigned int	num1;

	num = 5;
	ft_strncpy(destination, src, num);
	printf("%s\n", destination);
	num1 = 7;
	ft_strncpy(dest1, src1, num1);
	printf("%s\n", dest1);
	return (0);
}*/
