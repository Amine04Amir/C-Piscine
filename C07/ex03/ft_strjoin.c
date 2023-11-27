/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:19:42 by mamir             #+#    #+#             */
/*   Updated: 2023/10/05 11:19:51 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*alloc(int size, char **strs, char *sep)
{
	int		ln;
	char	*s;
	int		i;

	i = 0;
	ln = 0;
	while (i < size)
		ln += str_len(strs[i++]);
	ln += str_len(sep) * (size - 1);
	ln++;
	if (size == 0)
		ln = 1;
	s = (char *)malloc(sizeof(char) * ln);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*allstr;

	i = 0;
	n = 0;
	allstr = alloc(size, strs, sep);
	if (allstr == NULL)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			allstr[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			allstr[n++] = sep[j++];
		i++;
	}
	allstr[n] = '\0';
	return (allstr);
}
