/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:20:03 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/15 21:20:08 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0))
	{
		printf("i = %d\ts1[i] = %c\ts2[i] = %c\n", i, s1[i], s2[i]);
		i++;
	}
	printf("i = %d\ts1[i] = %c\ts2[i] = %c\n", i, s1[i], s2[i]);
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "LOL";
// 	char	s2[] = "LO";
// 	char	s3[] = "LOLO";
// 	char	s4[] = "LOLA";
// 	char	s5[] = "LOLB";
// 	char	s6[] = "";
// 	char	s7[] = "LOL\n";
// 	char	s8[] = "LOL ";
// 	char	s9[] = "LOL\t";

// 	printf("ft_strcmp(s1, s2) = %d\n", ft_strcmp(s1, s2));
// 	printf("ft_strcmp(s1, s2) = %d\n", ft_strcmp(s1, s3));
// 	printf("ft_strcmp(s4, s5) = %d\n", ft_strcmp(s4, s5));
// 	printf("ft_strcmp(s5, s4) = %d\n", ft_strcmp(s5, s4));
// 	printf("ft_strcmp(s6, s6) = %d\n", ft_strcmp(s6, s6));
// 	printf("ft_strcmp(s6, s1) = %d\n", ft_strcmp(s6, s1));
// 	printf("ft_strcmp(s7, s1) = %d\n", ft_strcmp(s7, s1));
// 	printf("ft_strcmp(s8, s1) = %d\n", ft_strcmp(s8, s1));
// 	printf("ft_strcmp(s9, s1) = %d\n", ft_strcmp(s9, s1));
// 	printf("ft_strcmp(s7, s8) = %d\n", ft_strcmp(s7, s8));
// 	printf("ft_strcmp(s7, s9) = %d\n", ft_strcmp(s7, s9));
// 	printf("ft_strcmp(s8, s9) = %d\n", ft_strcmp(s8, s9));
// 	return (0);
// }
