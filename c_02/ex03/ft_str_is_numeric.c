/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:57:06 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 10:32:02 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0); 
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("12345")); //1
	printf("%d\n", ft_str_is_numeric("12f45")); //0
	printf("%d\n", ft_str_is_numeric("  ")); //0
	printf("%d\n", ft_str_is_numeric("")); //1
	printf("%d\n", ft_str_is_numeric("asfwrgf")); //0
	printf("%d\n", ft_str_is_numeric("1")); //1
}*/
