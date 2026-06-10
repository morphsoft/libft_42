/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:26:13 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/03 19:37:04 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_count_words(const char *s, char splitter)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == splitter)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != splitter && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	j;
	size_t	k;

	if (s == NULL)
		return (NULL);
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			k = 0;
			while (s[k] != c && s[k] != '\0')
				k++;
			split[j++] = ft_substr(s, 0, k);
			s += k;
		}
	}
	split[j] = NULL;
	return (split);
}
