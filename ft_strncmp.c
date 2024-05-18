/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 15:09:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Compare at most the first n bytes of str1 and str2 (Diff
   between the ASCII values of each char).
   Return value < 0: str1 is less than str2
   Return value > 0: str1 is more than str2
   Return value = 0: str1 == str2
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 1;
	while (*s1 == *s2 && i < n && *s1 != '\0')
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
