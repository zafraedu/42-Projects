/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:16:57 by ezafra-r          #+#    #+#             */
/*   Updated: 2023/02/15 14:24:54 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (up == 1)
				str[i] -= 32;
			up = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			up = 0;
		else
			up = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(){
	char str1[] = "pruEba ? AE dEl 42Ejercio*eX09";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
}
*/
