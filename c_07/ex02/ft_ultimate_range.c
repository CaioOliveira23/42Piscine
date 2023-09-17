/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:21:35 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/12 11:26:26 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	gap;
	int	*arr;
	int	i;

	i = 0;
	gap = max - min;
	arr = (int *) malloc(sizeof(int) * gap);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = arr;
	while (i < gap)
	{
		arr[i] = min + i;
		i++;
	}
	return (gap);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
