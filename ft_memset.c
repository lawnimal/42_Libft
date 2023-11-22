/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:21:54 by msavina           #+#    #+#             */
/*   Updated: 2023/10/14 19:52:06 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief Fill a byte string with a byte value
// @param dest String to fill wih byte
// @param val value of the byte
// @param len number of bytes to be written
// @return first @param dest
void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*buf;
	size_t			i;

	buf = dest;
	i = 0;
	while (i < len)
	{
		buf[i] = val;
		i++;
	}
	return (dest);
}
