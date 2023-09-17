/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:55:30 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/09 19:54:21 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	printf("%c", '\n');
	printf("%d", ft_iterative_factorial(4));
	printf("%c", '\n');
	printf("%d", ft_iterative_factorial(3));
	printf("%c", '\n');
	printf("%d", ft_iterative_factorial(2));
}*/
