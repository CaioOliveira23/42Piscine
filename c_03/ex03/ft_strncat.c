/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:10:17 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/06 17:13:57 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
    int i;

    i = 0;
    char word_dest[50] = "sera que fiz ";
    char word_src[50] = "CORRETO!!!";
    ft_strncat(word_dest, word_src, 4);
    while (word_dest[i] != '\0')
    {
        printf("%c", word_dest[i]);
        i++;
    }

}
