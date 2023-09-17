/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:39:15 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 20:16:45 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{	
	int	i;
	char	name[20] = "sao siLLLVEStre";
	
	i = 0;
	ft_strupcase(name);

	while (name[i] != '\0')
	{
		printf("%c", name[i]);
		i++;
	}
}*/
