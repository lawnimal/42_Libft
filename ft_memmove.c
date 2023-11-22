/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:51:03 by msavina           #+#    #+#             */
/*   Updated: 2023/11/11 14:50:28 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief copies len bytes from str src to str dest, the str mayoverlap
// @param dest pointer do dest adress
// @param pointer to src adress
// @param len nmb of bytes to copy
// @return original val of dest
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dst;
	const char	*source;

	dst = (char *)dest;
	source = (const char *)src;
	if (!dst && !source)
		return (NULL);
	if (dst < source)
	{
		while (len--)
			*dst++ = *source++;
	}
	else
	{
		dst += len -1;
		source += len -1;
		while (len--)
			*dst-- = *source--;
	}
	return (dest);
}
