/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:20:00 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 11:22:37 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	s = 10;
	int	i;

	i = 0;
	ft_rev_int_tab(array, s);
	while (i < s)
	{
		printf("%d", array[i]);
		i++;
	}		
}*/
