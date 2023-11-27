/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:20:50 by mamir             #+#    #+#             */
/*   Updated: 2023/10/02 21:17:05 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				write (1, &av[j][i], 1);
				i++;
			}
			j++;
			write (1, "\n", 1);
		}
	}
}