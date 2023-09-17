/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:34:07 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 10:51:54 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("%d\n", ft_str_is_printable("ABCDSFMJEMGNJRNMG']")); //1
	printf("%d\n", ft_str_is_printable("\n\t\v\f")); //0
	printf("%d\n", ft_str_is_printable("csd")); //1
	printf("%d\n", ft_str_is_printable("cs\v")); //0
	printf("%d\n", ft_str_is_printable("\f")); //0
}*/
