/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:09:26 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/26 19:19:46 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char * str;
    unsigned int ind;
    int len;

    len = strlen((char *)s);
    str = malloc(sizeof(char) *(len + 1));
    if(!str || !s || !f)
        return(NULL);
    while(str[ind])
    {
        str[ind] = (*f)(ind, str[ind]);
        ind++;
    }
    return(str);
}
