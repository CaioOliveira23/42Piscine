/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:57 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 10:46:21 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("flamengo")); //1
	printf("%d\n", ft_str_is_lowercase("Flamengo")); //0
	printf("%d\n", ft_str_is_lowercase("flaMengo")); //0
	printf("%d\n", ft_str_is_lowercase("")); //1
	printf("%d\n", ft_str_is_lowercase("  ")); //0
	printf("%d\n", ft_str_is_lowercase("f")); //1
}*/
