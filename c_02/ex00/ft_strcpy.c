/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:39:51 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/03 20:07:02 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;	

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	nome[50] = "caio";
	char	idade[50] = "vinte e cinco";
	char	audio[50] = "fone de ouvido";
	char	periferico[50] = "teclado";
	printf("%s", ft_strcpy(nome, idade));
	printf("\n%s", strcpy(periferico, audio));
}*/
