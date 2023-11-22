/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:03:28 by msavina           #+#    #+#             */
/*   Updated: 2023/10/25 17:35:05 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (NULL);
	while (i < len)
	{
		if (*(unsigned char *)(s + i) == ((unsigned char)c))
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[6] = "abcdef";	
// 	printf("%zu\n", (size_t)*str);
// 	printf("%d\n", (int)ft_memchr(str, 'c', 0));
// }