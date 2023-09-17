/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:04:39 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/09 19:55:51 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	sum;
	int	i;

	sum = 1;
	i = nb;
	if (nb > 0)
	{
		sum *= i * (ft_recursive_factorial(nb -1));
		i -= 1;
	}
	if (nb < 0)
		return (0);
	return (sum);
}
/*
int	main(void) //comentar
{
	printf("%d", ft_recursive_factorial(5));
	printf("%c", '\n');
	printf("%d", ft_recursive_factorial(4));
        printf("%c", '\n');
        printf("%d", ft_recursive_factorial(3));
        printf("%c", '\n');
        printf("%d", ft_recursive_factorial(2));
}*/
