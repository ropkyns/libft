/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:37:50 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/26 14:37:22 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char * ft_strchr(const char * str, int c);

char * ft_strchr(const char * str, int c)
{
    char * dup;

    dup = (char *)str;
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