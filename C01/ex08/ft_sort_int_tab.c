/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:49:27 by mamir             #+#    #+#             */
/*   Updated: 2023/09/19 19:08:53 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	tmp;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size -1)
		{
			if (tab[y] > tab[y + 1])
			{
				tmp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = tmp;
			}
			y++;
		}
		x++;
	}
}

// #include <stdio.h>
// int	main()
// {
// 	int tab[6] = {7, 6, 3, 4, 2, 5};
// 	int size = 6;

// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
// 	return (0);
// }	
