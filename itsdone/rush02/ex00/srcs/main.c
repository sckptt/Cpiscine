/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaksimo <mmaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:28:31 by mmaksimo          #+#    #+#             */
/*   Updated: 2024/01/28 22:28:32 by mmaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

int	check_args(int argc, char *argv[], char **file, char **input)
{
	*file = "numbers.dict";
	if (argc == 1 || argc > 3)
		return (0);
	if (argc == 3)
	{
		*file = argv[1];
		*input = argv[2];
	}
	else
		*input = argv[1];
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*file;
	char	*input;
	char	**parsed_input;
	t_nbr	**parsed_dict;

	if (!check_args(argc, argv, &file, &input))
		return (0);
	if (is_valid_input(input))
		parsed_input = parse_input(input);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	parsed_dict = parse_dict(file);
	if (parsed_dict == NULL)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	display_number(parsed_dict, parsed_input);
	destroy_structs(parsed_dict);
	destroy_strings(parsed_input);
}
