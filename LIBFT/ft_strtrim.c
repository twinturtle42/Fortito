/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:27:48 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/02 16:42:26 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strend(char const *s, size_t i)
{
	size_t	end;

	end = 0;
	while (s[i - 1] == '\n' || s[i - 1] == ' ' || s[i - 1] == '\t')
	{
		i--;
		end++;
	}
	return (end);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	len;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	if (s == 0)
		return (NULL);
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i])
		start = i;
	while (s[i])
		i++;
	len = i;
	end = ft_strend(s, i);
	len = len - start - end;
	return (start == 0 && end == 0) ? ((char*)s) : (ft_strsub(s, start, len));
	if (s[start] == 0)
		return (ft_strnew(0));
}