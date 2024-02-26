/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:21:36 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/26 15:58:35 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n - 1 && s1[i] == s2[i]) && (s1[i] != 0 || s2[i] != 0))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
// 	printf("ft_strncmp(s1, s2) = %d\n", ft_strncmp(s1, s2, 2));
// 	printf("ft_strncmp(s1, s2) = %d\n", ft_strncmp(s1, s3, 2));
// 	printf("ft_strncmp(s4, s5) = %d\n", ft_strncmp(s4, s5, 2));
// 	printf("ft_strncmp(s5, s4) = %d\n", ft_strncmp(s5, s4, 2));
// 	printf("ft_strncmp(s6, s6) = %d\n", ft_strncmp(s6, s6, 2));
// 	printf("ft_strncmp(s6, s1) = %d\n", ft_strncmp(s6, s1, 2));
// 	printf("ft_strncmp(s7, s1) = %d\n", ft_strncmp(s7, s1, 2));
// 	printf("ft_strncmp(s8, s1) = %d\n", ft_strncmp(s8, s1, 2));
// 	printf("ft_strncmp(s9, s1) = %d\n", ft_strncmp(s9, s1, 2));
// 	printf("ft_strncmp(s7, s8) = %d\n", ft_strncmp(s7, s8, 2));
// 	printf("ft_strncmp(s7, s9) = %d\n", ft_strncmp(s7, s9, 2));
// 	printf("ft_strncmp(s8, s9) = %d\n", ft_strncmp(s8, s9, 2));
// 	return (0);
// }
// int main(int argc, char **argv)
// {
//     printf("strncmp:%d\n\n",
// 		strncmp(argv[1],argv[2],atoi(argv[3])));
//     printf("ft_strncmp:%d\n\n",
// 		ft_strncmp(argv[1],argv[2],atoi(argv[argc - 1])));
// }
