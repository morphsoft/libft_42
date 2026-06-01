/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:27:04 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/01 14:27:05 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *ptr, int character, size_t num)
{
	const unsigned char	*p;
	unsigned char		c;

	p = ptr;
	c = (unsigned char)character;
	while (num--)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
