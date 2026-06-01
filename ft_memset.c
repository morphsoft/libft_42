/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:27:11 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/01 14:27:12 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
