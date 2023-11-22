/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:19:16 by msavina           #+#    #+#             */
/*   Updated: 2023/10/16 17:55:45 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

// @brief compares first nmb of bytes of the block of memory pointed by ptr1
// to the first nmb bytes pointed by ptr2
// @param s1 pointer to first block of mem
// @pram s2 pointer to second block of mem
// @param len mb of bytes to compare
// @return zero if both str match or difference between the first two bytes,
// treated as unsigned char

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (len > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		len--;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
// }
