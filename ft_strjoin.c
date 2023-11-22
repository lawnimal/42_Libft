/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:15:24 by msavina           #+#    #+#             */
/*   Updated: 2023/10/20 16:50:48 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: allocates memory and returns a whole new string from concatenation
// of s1 and s2
// @param: s1 prefix string, s2 suffix string
// @return the new str, NULL if allocation fails
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*subjoin;

	if (!s1 || !s2)
		return (NULL);
	subjoin = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!subjoin)
		return (NULL);
	ft_memcpy(subjoin, s1, ft_strlen(s1));
	ft_strlcat(subjoin, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (subjoin);
}
