/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:18:50 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/27 14:25:31 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big,	const char *little, size_t len);

char * ft_strnstr(const char * big, const char * little, size_t len)
{
    size_t i;

    if(little == NULL || ft_strlen(little) == 0)
        return((char *)big);
    if(ft_strlen(little) > len)
        return(NULL);
    i = 0;
    while(i < len)
    {
        if(ft_memcmp(&big[i], (char *)little, ft_strlen(little)) == 0)
        {
            if(i + ft_strlen(little) > len)
                return((char *)little);
            return((char *)&big[i]);
        }
        i++;
    }
    return(NULL);
}
