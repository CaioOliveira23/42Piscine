/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:09:00 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 21:05:51 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("caio", "caioba")); // -1
	printf("%d\n", ft_strcmp("klone", "klone")); // 0
	printf("%d\n",  ft_strcmp("sim", "nao")); // 1
	printf("%d\n",  ft_strcmp("nao", "sim")); // -1
	printf("%d\n",  ft_strcmp("caioba", "caio")); // 1
}*/
