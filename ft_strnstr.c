/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:18:50 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/21 17:26:09 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char * ft_strnstr(const char * big, const char * lil, size_t len);

char * ft_strnstr(const char * big, const char * lil, size_t len)
{
    size_t i;
    char * large;
    char * small;

    large = (char *)big;
    if(small == NULL || ft_strlen(small) == 0)
        return(big);
    if(ft_strlen(small) > n)
        return(NULL);
    i = 0;
    while(large[i] != '\0' && i < len)
    {
        if(ft_strncmp(*large[i], small, ft_strlen(small)) == 0)
            return(small);
        i++;
    }
    return(NULL);
    
}