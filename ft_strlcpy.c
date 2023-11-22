/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:34:53 by msavina           #+#    #+#             */
/*   Updated: 2023/10/20 18:20:42 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: copies up to dstsize - 1 characters from the string src to dst
// NULL-terminating the result if dstsize
// @param: dst pointer to dest address
// @param: src pointer to source address
// @param: dstlen nmb of bytes to copy from src to dst
// @return: size of the string

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (dstlen == 0)
		return (srclen);
	while (src[i] && i < dstlen - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (srclen);
}
