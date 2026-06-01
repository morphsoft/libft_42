/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:27:27 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/01 14:27:28 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	if (character == '\0')
		return ((char *)str);
	return (NULL);
}
