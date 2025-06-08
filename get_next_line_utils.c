/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bavi </var/spool/mail/Bavi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 22:44:18 by Bavi              #+#    #+#             */
/*   Updated: 2025/06/08 23:45:25 by Bavi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	while (n > 0)
	{
		pdest = psrc;
		pdest++;
		psrc++;
	}
	return (dest); 
}
