/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:29:12 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/23 17:22:58 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup(const char *s);

char * ft_strdup(const char *s)
{
    char * dup;
    size_t len;

    len = strlen((char *)s);
    dup = malloc(sizeof(char) * len);
    if(dup == NULL)
        return(NULL);
    memcpy(dup, (char *)s, len);
    return(dup);
}

int main(void)
{
    char * s = "Ceci est un test";

    printf("ma fonction : %s\n longueur : %lu", ft_strdup(s), strlen(ft_strdup(s)));
    printf("\nfonction original : %s\n longueur : %lu",strdup(s), strlen(strdup(s)));
}