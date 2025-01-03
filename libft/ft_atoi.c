/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachat <anachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:27:19 by anachat           #+#    #+#             */
/*   Updated: 2024/10/25 21:46:38 by anachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	nb;

	s = 1;
	i = 0;
	nb = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' || str[i] == '	'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * s);
}
