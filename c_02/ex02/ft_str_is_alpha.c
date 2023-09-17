/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:31:37 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/07 13:15:05 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("caio")); // 1
	printf("%d\n", ft_str_is_alpha("caio3")); // 0
	printf("%d\n", ft_str_is_alpha("3caio")); // 0
	printf("%d\n", ft_str_is_alpha(" ")); // 0
	printf("%d\n", ft_str_is_alpha("1c23")); //0
	printf("%d", ft_str_is_alpha("esporte")); // 1
}
