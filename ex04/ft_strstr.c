/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argrouss <argrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:24:03 by argrouss          #+#    #+#             */
/*   Updated: 2024/02/19 22:24:05 by argrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != 0)
			{
				j++;
			}
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char to_find[10] = "coucou";
//     char str[80] = "Hello\ncou arnaud, hihi blablacoucou et tchao";
//     printf("strstr:   %s\n",strstr(str,to_find));
//     printf("ft_strstr:%s\n",ft_strstr(str,to_find));
// }