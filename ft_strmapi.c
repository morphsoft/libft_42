/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:27:41 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/13 14:52:49 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*mapped;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	mapped = (char *)malloc(ft_strlen(s) + 1);
	if (mapped == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
