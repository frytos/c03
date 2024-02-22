/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:54:44 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/19 21:54:51 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	len_dest;

	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;
	index = 0;
	while (src[index] != 0 && index < nb)
	{
		dest[len_dest + index] = src[index];
		index++;
	}
	dest[len_dest + index] = 0;
	return (dest);
}

// int main(void)
// {
//     unsigned int nb = 10;
//     char s1[128] = "bonjour";
//     char s2[128] = " salut ARNAUD";
//     char s3[128] = "bonjour";
//     char s4[128] = " salut ARNAUD";
//     printf("---strncat---\n%s\n",strncat(s1, s2, nb));
//     printf("---ft_strncat---\n%s\n",ft_strncat(s3, s4, nb));
// }