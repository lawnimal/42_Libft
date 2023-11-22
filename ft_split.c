/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:19:41 by msavina           #+#    #+#             */
/*   Updated: 2023/10/23 14:06:07 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: dynamilcally allocates memory and return an array of str obtained
// by splitting s using the char c as a delimiter. Ends with NULL terminator.
// @param: s str to be split
// @param: c delimiter char
// @return: array of new strings resulting from the split, NULL if alloc fails
static int	ft_strcount(const char *str, char sep)
{
	int	len;
	int	count;
	int	i;

	len = ft_strlen(str);
	i = 0;
	count = 0;
	while (i < len)
	{
		if (str[i] == sep)
			i++;
		else
		{
			count++;
			while (i < len && str[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	**ft_free(char **s, unsigned int i)
{
	i = 0;
	while (s[i] != NULL)
	{
		free(s[i++]);
	}
	free(s);
	return (NULL);
}

static char	**ft_splitting(const char *s, char c, int len, char **sdst)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	while (i < ft_strcount(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (end < len && s[end] != c)
			end++;
		sdst[i] = ft_substr(s, start, end - start);
		if (!sdst[i])
			return (ft_free(sdst, start));
		i++;
		start = end;
	}
	return (sdst);
}

char	**ft_split(char const *s, char c)
{
	char			**sdst;
	int				len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	sdst = (char **)ft_calloc(ft_strcount(s, c) + 1, sizeof(char *));
	if (!sdst)
		return (NULL);
	if (!ft_splitting(s, c, len, sdst))
		return (NULL);
	return (sdst);
}

// int main(){
// 	ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit.
//Sed non risus. Suspendisse", ' ');
// }
// cc ft_split.c ft_calloc.c ft_strlen.c ft_substr.c ft_bzero.c ft_memcpy.c
//ft_strdup.c ft_memset.c ft_strlcpy.c -g -o ../testfiles/a.out