/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:54:29 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/16 15:25:06 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;
    int len;

    i = 0;
    len = strlen(s);
    if(s != NULL && f != NULL)
    while(i < len)
    {
        (*f) (len, s)
        i++;
        s++;
    }
}