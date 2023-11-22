/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:48 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/22 18:44:53 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n);

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t i;
    size_t tdst;
    size_t tsrc;

    i = 0;
    tdst = ft_strlen(dst);
    tsrc = ft_strlen(src);
    if(tdst >= (n-1))
        return(0);
    while((tdst + i) < (n-1) && src[i])
    {
        dst[tdst + i] = src[i];
        i++;
    }
    dst[tdst + i] = '\0';
    return(tdst  +tsrc);
}
int main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "bvfvbf";
	unsigned int	size;

	size = 15;
//	printf("%lu\n", strlcat(dest, src, size));
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}