/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavina <msavina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:18:19 by msavina           #+#    #+#             */
/*   Updated: 2023/10/25 17:05:38 by msavina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// @brief: allocates heap memory for and return a string representing the int
// received as an argument
// @param: n integer to convert into str
static size_t	ft_countnbr(int nbr)
{
	size_t	len_n;

	len_n = 0;
	if (nbr <= 0)
		len_n++;
	while (nbr)
	{
		len_n++;
		nbr = nbr / 10;
	}
	return (len_n);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len_n;
	long	n_cp;

	n_cp = n;
	len_n = ft_countnbr(n_cp);
	str = ft_calloc(len_n + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (!n_cp)
		str[0] = '0';
	if (n_cp < 0)
	{
		str[0] = '-';
		n_cp *= -1;
	}
	while (n_cp)
	{
		str[len_n - 1] = n_cp % 10 + 48;
		n_cp /= 10;
		len_n--;
	}
	return (str);
}

// int	main()
// {
// 	ft_itoa(-9);
// 	return (0);
// }