/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:29:04 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/19 21:29:06 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	len_dest;

	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;
	index = 0;
	while (src[index] != 0)
	{
		dest[len_dest + index] = src[index];
		index++;
	}
	dest[len_dest + index] = 0;
	return (dest);
}

// int main(int argc, char **argv)
// {
//     char s1[128] = "Bonjour";
// 	char s2[128] = "Bonjour";
//     char s3[128] = " Arnaud Groussard.  ";
//     printf("---strcat---\n%s\n",strcat(s1, s3));
//     printf("---ft_strcat---\n%s\n",ft_strcat(s2, s3));
// }