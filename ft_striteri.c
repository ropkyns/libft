/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:54:29 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/21 17:26:03 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(s);
    if(s != NULL && f != NULL)
    while(i < len)
    {
        (*f) (len, s)
        i++;
        s++;
    }
}