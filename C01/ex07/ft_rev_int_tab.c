/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:12:36 by mamir             #+#    #+#             */
/*   Updated: 2023/09/19 19:10:44 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
// #include <stdio.h>

// int main()
// {
//     int str [] = {1, 2, 3, 4, 5};
//     int size = sizeof(str) / sizeof(str[0]);
    
//     ft_rev_int_tab(str, size);
    
//     int i = 0;
//     while (i < size)
//     {
//         printf("%d", str[i]);
//         i++;
//     }
//     return (0);
// }