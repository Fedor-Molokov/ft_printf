/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarsell <dmarsell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:57:39 by dmarsell          #+#    #+#             */
/*   Updated: 2020/05/23 12:27:15 by dmarsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
		return (i);
	}
	return (0);
}