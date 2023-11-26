/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:31:28 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/26 14:37:03 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char * ft_strrchr(const char * str, int c);

char * ft_strrchr(const char * str, int c)
{
    char * dup;

    dup = (char *)str + strlen(str);
    while(*dup != c)
    {
        if(dup == str)
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