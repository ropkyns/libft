/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:18:50 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/26 18:50:36 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char * big, const char * little, size_t n);

char * ft_strnstr(const char * big, const char * little, size_t n)
{
    size_t i;

    if(little == NULL || ft_strlen(little) == 0)
        return((char *)big);
    if(ft_strlen(little) > n)
        return(NULL);
    i = 0;
    while(i < n)
    {
        if(ft_memcmp(&big[i], (char *)little, ft_strlen(little)) == 0)
        {
            if(i + ft_strlen(little) > n)
                return((char *)little);
            return((char *)&big[i]);
        }
        i++;
    }
    return(NULL);
}
