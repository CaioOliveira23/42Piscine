/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:34:55 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/04 17:30:51 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		in_line;

	i = 0;
	in_line = 1;
	to_lower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (in_line == 1)
				str[i] -= 32;
			in_line = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			in_line = 0;
		else
			in_line = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char word[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char word1[] = "dgafheth,tj.t/jearh.%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(word));
	printf("\n%s", ft_strcapitalize(word1));
}*/
