/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:03:58 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/09 15:22:26 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
    char * src = "42 Paris cursus";
    char * dst[50];
    size_t len = 5;
    puts(src);
    strlcpy(dst, src, len);
    puts(dst);
    return(0);
}