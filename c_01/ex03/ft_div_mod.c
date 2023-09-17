/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:14:47 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/08/31 08:26:29 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 2;
	j = 2;
	k = 0;
	l = 0;
	ft_div_mod(i, j, &k, &l);
	printf("%d %d", k, l);
}*/
