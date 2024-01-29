/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_nt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:27:49 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:27:50 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy_nt(char *dest, char *src, unsigned int n)
{
	unsigned int	position;

	position = 0;
	while (position < n && src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
