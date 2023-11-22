/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:25 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/22 18:45:06 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t len_s;
    char * sub;
    size_t i;
    size_t j;

    len_s = strlen((char *)s);
    if(len_s < start + len)
        return(NULL);
    sub = malloc(sizeof(char *) * len);
    if(sub == NULL)
        return(NULL);
    i = start;
    j = 0;
    while(i <= start + len)
    {
        sub[j] = (char)s[i];
        i++;
        j++;
    }
    return(sub);
}

int main(void)
{
    char * s = "Ceci est un test";
    printf("%lu\n", strlen(s));
    printf("%s\n%s", s, ft_substr(s, 12, 4));
    return(0);
}