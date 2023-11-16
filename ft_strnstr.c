/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:18:50 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/16 11:29:14 by paulmart         ###   ########.fr       */
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
    if(small == NULL || strlen(small) == 0)
        return(big);
    if(strlen(small) > n)
        return(NULL);
    i = 0;
    while(large[i] != '\0' && i < len)
    {
        if(strncmp(*large[i], small, strlen(small)) == 0)
            return(small);
        i++;
    }
    return(NULL);
    
}