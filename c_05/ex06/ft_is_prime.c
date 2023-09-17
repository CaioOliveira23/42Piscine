/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:53:16 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/09 20:01:28 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(17)); // 1
	printf("%d", ft_is_prime(13)); // 1
	printf("%d", ft_is_prime(2)); // 1
	printf("%d", ft_is_prime(4)); // 0
	printf("%d", ft_is_prime(16)); // 0
	printf("%d", ft_is_prime(5)); // 1
}*/
