/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:25:23 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:26:04 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_nbr
{
	char	*numeric;
	char	*written;
}	t_nbr;

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strncpy_nt(char *dest, char *src, unsigned int n);
char	**ft_split(char *str, char *charset);
int		ft_arraylen(char **array);
char	*find_in_dict(t_nbr **dict, char *key);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	*ft_itoa(int n);
char	*ft_strcpy(char *dest, char *src);
void	destroy_structs(t_nbr **structs);
void	destroy_strings(char **strings);
char	**map_three_digits(t_nbr **dict, char **nb_arr);
int		is_valid_input(char *str);
char	**parse_input(char *str);
t_nbr	**parse_dict(char *filename);
void	display_number(t_nbr **dict, char **nb_arr);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*sanitize_output(char *str);

#endif
