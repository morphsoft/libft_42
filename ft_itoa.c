/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:26:40 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/06/01 14:26:41 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		len;

	temp = n;
	len = 0;
	if (n <= 0)
		len = 1;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	ft_add_negative_sign_or_zero(str, n);
	while (n != 0)
	{
		str[--len] = '0' + (n % 10) * ft_is_negative(n);
		n /= 10;
	}
	return (str);
}

void	ft_add_negative_sign_or_zero(char *str, int n)
{
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
}

int	ft_is_negative(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}
