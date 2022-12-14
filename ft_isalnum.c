/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:07:36 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/11 12:42:41 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int x)
{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	else if (x >= '0' && x <= '9')
		return (2);
	return (0);
}
