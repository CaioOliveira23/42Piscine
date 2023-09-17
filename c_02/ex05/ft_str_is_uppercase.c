/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:28:36 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 10:48:49 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("FLaMENGO")); //0
	printf("%d\n", ft_str_is_uppercase("fLAMENGO")); //0
	printf("%d\n", ft_str_is_uppercase("F")); //1
	printf("%d\n", ft_str_is_uppercase("f")); //0
	printf("%d\n", ft_str_is_uppercase("")); //1
	printf("%d\n", ft_str_is_uppercase(" ")); //0
	printf("%d\n", ft_str_is_uppercase("flaMengo")); //0
	printf("%d\n", ft_str_is_uppercase("FLAMENGO")); //1
}*/
