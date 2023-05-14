/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcorzo-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:59:30 by jcorzo-h          #+#    #+#             */
/*   Updated: 2023/05/14 20:17:01 by jcorzo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	while (*s && s != NULL)
	{
		dest[i] = f(i, (char)*s++);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
