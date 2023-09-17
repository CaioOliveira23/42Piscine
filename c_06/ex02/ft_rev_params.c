/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:04:02 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/07 22:24:59 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	j = 0;
	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0' && argc)
		{
			put_char(argv[i][j]);
			j++;
		}
		put_char('\n');
		i--;
	}
}
