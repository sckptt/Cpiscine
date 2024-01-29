/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:27:16 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:27:17 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		pos_src;
	int		pos_dest;

	pos_src = 0;
	pos_dest = 0;
	while (dest[pos_dest] != '\0')
	{
		pos_dest++;
	}
	while (src[pos_src] != '\0')
	{
		dest[pos_dest] = src[pos_src];
		pos_src++;
		pos_dest++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}
