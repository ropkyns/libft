/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:54:29 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/03 21:36:43 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;
    
    i = 0;
    if(s)
    {
        while(s[i])
        {
            (*f)(i, s + i);
            i++;
        }
    }
}
