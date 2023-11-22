/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:30:58 by msavina           #+#    #+#             */
/*   Updated: 2023/10/20 16:51:38 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: copies len bytes of memory from src to dest
// @param: dest stores the address of destinated memory location
// @param: src stores the address od source memory from where to copy
// @param: len size of memory is going to be copied
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	if (!source && !destination)
		return (NULL);
	while (i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
