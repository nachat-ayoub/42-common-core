/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachat <anachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:01:32 by anachat           #+#    #+#             */
/*   Updated: 2024/11/05 10:55:44 by anachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strincludes(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1 || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strincludes(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strincludes(s1[end], (char *)set))
		end--;
	end++;
	if (start == ft_strlen(s1))
		end = start;
	str = malloc(((end - start) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
