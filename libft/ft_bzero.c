/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarsell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:48:09 by dmarsell          #+#    #+#             */
/*   Updated: 2019/09/25 20:17:50 by dmarsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char *)buf)[i] = '\0';
		i++;
	}
}