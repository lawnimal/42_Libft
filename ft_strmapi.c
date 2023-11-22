/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:09:28 by msavina           #+#    #+#             */
/*   Updated: 2023/10/18 15:16:41 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: The purpose of this function is to create a new string where each
// character is the result of applying the f function to the corresponding
// character in the input string
// @param: str o which to iterate
// @pram: function to apply to each character
// @return: new dynamically allocated str that contains the modified characters
// from successive applications of (f), NULL if allocation fails
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*s2;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	s2 = ft_calloc(sizeof(char), len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
