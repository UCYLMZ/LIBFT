/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:30:40 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/19 04:06:33 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (*src != '\0' & i < (dstsize - 1))
		{
			*(dst++) = *(src++);
			i++;
		}
		*dst = '\0';
	}
	return (len);
}
