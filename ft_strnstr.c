/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:18:50 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/15 21:25:19 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char * ft_strnstr(const char * big, const char * lil, size_t len);

char * ft_strnstr(const char * big, const char * lil, size_t len)
{
    size_t i;

    if(lil = '\0')
        return(big);
    i = 0;
    while(lil[i] && i < len)
    {
        
    }
    
}