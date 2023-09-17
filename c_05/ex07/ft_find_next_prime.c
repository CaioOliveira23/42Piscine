/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:18:03 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/10 18:32:44 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;
	n = 2;
	if (nb < 2)
		return (0);
	while (n <= (nb / n))
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(10)); //11
	printf("%d\n", ft_find_next_prime(12)); //13
	printf("%d\n", ft_find_next_prime(2)); //2
	printf("%d\n", ft_find_next_prime(5)); //5
	printf("%d\n", ft_find_next_prime(16)); //17
	printf("%d\n", ft_find_next_prime(3)); //3
	printf("%d\n", ft_find_next_prime(7)); //7
	printf("%d", ft_find_next_prime(2147483640)); //7
}
