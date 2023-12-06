/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:37:50 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 17:33:46 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr( const char * s, int c );

char * ft_strchr( const char * s, int c )
{
    char * dup;

    dup = (char *)s;
    while(*dup != c)
    {
        if(*dup == '\0')
            return(NULL);
        dup++;
    }
    return(dup);
}

/* int main(void)
{
    char * str = "Ceci n'est pas un test.";
    char clem = 'z';

    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",ft_strchr(str, clem));
    str = "Ceci n'est pas un test.";
    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",strchr(str, clem));
    return(0);
} */