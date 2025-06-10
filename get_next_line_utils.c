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

size_t	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (i != '\0')
		i++;
	return (i);
}

char	ft_strjoin(char const*s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void		*a;
	size_t		total;
	size_t		i;
	unsigned char	*ptr;

	if (nitems != 0 && size > (size_t)-1 / nitems)
		return (NULL);
	total = nitems * size;
	a = malloc(total);
	if (!a)
		return (NULL);
	ptr = (unsigned char *)a;
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return (a);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
