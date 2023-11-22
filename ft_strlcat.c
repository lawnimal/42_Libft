/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:20:34 by msavina           #+#    #+#             */
/*   Updated: 2023/10/23 16:21:27 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: appends str src to the end of dst.
// It will append dstlen - dlen - 1 charachters and then NULL-terminate
// unless dstlen is 0 or the orig dst str was lomger than dstlen.
// @return: initial len of dst plus the len of src.
size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	dlen;
	size_t	i;
	size_t	srclen;

	i = 0;
	dlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen <= dlen)
		return (dstlen + srclen);
	while (src[i] && (i < dstlen - dlen - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + srclen);
}
