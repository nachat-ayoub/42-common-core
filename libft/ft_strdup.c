/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachat <anachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:40:37 by anachat           #+#    #+#             */
/*   Updated: 2024/10/27 13:12:53 by anachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(s1) + 1;
	copy = (char *) malloc(size * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s1, size);
	return (copy);
}
