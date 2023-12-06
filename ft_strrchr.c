/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:31:28 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 17:33:55 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr( const char * s, int c );

char * ft_strrchr( const char * s, int c )
{
    char * dup;

    dup = (char *)s + strlen(s);
    while(*dup != c)
    {
        if(dup == s)
            return(NULL);
        dup--;
    }
    return(dup);
}

/* int main(void)
{
    char * str = "Va te faire tapper par des mammouths";
    char clem = 'y';

    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",ft_strrchr(str, clem));
    str = "Va te faire tapper par des mammouths";
    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",strrchr(str, clem));
    return(0);
} */