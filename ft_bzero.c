/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:05:14 by msavina           #+#    #+#             */
/*   Updated: 2023/10/13 11:19:34 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief write zeroes to a byte string
// @param dest string to set zeroed bytes
// @param len number of bytes to be zeroed
void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, '\0', len);
}
