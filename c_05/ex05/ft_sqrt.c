/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:59:27 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/10 15:05:35 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	dec;
	int	o_nb;
	int	square;

	dec = 1;
	o_nb = nb;
	square = 0;
	while (nb - dec >= 0)
	{
		nb -= dec;
		dec += 2;
		square++;
	}
	if (square * square == o_nb)
		return (square);
	return (0);
}

/*int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	printf("%d", ft_sqrt(atoi(argv[1])));
}*/
