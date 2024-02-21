/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:33:37 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/19 23:33:41 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;
	len_src = 0;
	while (src[len_src] != 0)
		len_src++;
	if (size <= len_dest || size == 0)
		return (size + len_src);
	index = 0;
	while (src[index] != 0 && len_dest + index < size - 1)
	{
		dest[len_dest + index] = src[index];
		index++;
	}
	dest[len_dest + index] = 0;
	return (len_dest + len_src);
}

// int main(int argc, char **argv)
// {
//     (void)argc;
//     char *s1 = strdup(argv[1]);
//     char *s2 = strdup(argv[2]);
//     char *s3 = strdup(argv[1]);
//     char *s4 = strdup(argv[2]);
//     int    ret1;
//     int ret2;

//     printf("----ft_strlcat----\n");
//     printf("Depart :\ns1 = %s\ns2 = %s\n", s1, s2);
//     ret1 = ft_strlcat(s1, s2, atoi(argv[3]));
//     printf("Appel a la fonction\n");
//     printf("s1 = %s\ns2 = %s\nret = %d\n", s1, s2, ret1);
//     printf("\n----strlcat----\n");
//     printf("Depart :\ns1 = %s\ns2 = %s\n", s3, s4);
//     ret2 = strlcat(s3, s4, atoi(argv[3]));
//     printf("Appel a la fonction\n");
//     printf("s1 = %s\ns2 = %s\nret = %d", s3, s4, ret2);
// }