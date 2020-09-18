/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascual <mpascual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:45:01 by mpascual          #+#    #+#             */
/*   Updated: 2020/09/16 17:56:32 by mpascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	n_digits;
	unsigned int	nb;
	unsigned int	i;

	if (nbr < 0)
		nb = (unsigned int)(nbr * -1);
	else
		nb = (unsigned int)nbr;
	n_digits = ft_nbrlen(nbr, 10);
	if (!(str = malloc(n_digits + 1 + (nbr < 0 ? 1 : 0))))
		return (NULL);
	i = 0;
	if (nbr < 0 && (str[i] = '-'))
		i++;
	while (nb >= 10)
	{
		str[i++] = nb / (10 * n_digits + 48);
		nb /= 10;
	}
	str[i++] = (nb % 10 + 48);
	str[i] = '\0';
	ft_putstr(str);
	return (str);
}