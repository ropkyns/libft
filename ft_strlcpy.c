/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:03:58 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/26 14:37:09 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t lendst);

size_t ft_strlcpy(char *dst, const char *src, size_t lendst)
{
    size_t i;

    i = 0;
    if (lendst < 1)
        return(0);
    while(i < (lendst-1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(lendst);
}

/* int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci est un test";
	size = 10;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	//printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
} */
