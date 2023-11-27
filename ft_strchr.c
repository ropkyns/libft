/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:37:50 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/27 14:26:26 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr( const char * string, int searchedChar );

char * ft_strchr( const char * string, int searchedChar )
{
    char * dup;

    dup = (char *)string;
    while(*dup != searchedChar)
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