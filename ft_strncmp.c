/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <mito@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:23:22 by mito              #+#    #+#             */
/*   Updated: 2023/11/15 14:34:45 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*news1;
	unsigned char	*news2;

	i = 0;
	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	while ((news1[i] != '\0' || news2[i] != '\0') && (i < n))
	{
		if (news1[i] == news2[i])
			i++;
		else
			return (news1[i] - news2[i]);
	}
	return (0);
}
