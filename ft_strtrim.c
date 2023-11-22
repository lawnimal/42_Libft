/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:53:04 by msavina           #+#    #+#             */
/*   Updated: 2023/10/20 19:11:45 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: allocates memory and returns a copy of s1 with the characters
// speciefied in set removed from the beginning and the end of the str
// @param: s1 the str to be trimmed
// @param: set the set of characters at the end and/or the beginning of the
// str to trim
// @return: the trimmed str, NULL if allocaton fails

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*s2end;

	if (!s1)
		return (NULL);
	s2end = (char *)s1 + ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (s2end > s1 && ft_strchr(set, *s2end))
		s2end--;
	s2 = ft_calloc(s2end - s1 + 2, sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, (s2end - s1 + 2));
	return (s2);
}
