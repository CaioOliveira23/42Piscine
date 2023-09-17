/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:44:04 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/12 13:22:56 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;
	int		*d;

	if (min >= max)
		return (NULL);
	range = max - min;
	d = ((buffer = (int *)malloc(range * sizeof(int))));
	if (!d)
		return (NULL);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	min = 5;
	max = 10;
	i = 0;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
