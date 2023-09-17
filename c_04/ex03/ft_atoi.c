/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:51 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/10 19:52:09 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	sin;
	int	res;

	n = 0;
	sin = 1;
	res = 0;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	while (str[n] == 45 || str[n] == 43)
	{
		if (str[n] == 45)
			sin *= -1;
		n++;
	}
	while (str[n] != '\0' && str[n] >= 48 && str[n] <= 57)
	{
		res *= 10;
		res += str[n] - '0';
		n++;
	}
	return (res * sin);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%d", ft_atoi(argv[argc -1]));
}*/
