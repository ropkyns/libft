/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:53:16 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/22 18:45:01 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>
#include <stdio.h>
#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2);

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    char * concat;
    int i;
    int j;

    len = strlen((char *)s1 + (char *)s2);
    concat = malloc(sizeof(char *) * len);
    if(concat == NULL)
        return(NULL);
    i = 0;
    while(s1[i])
    {
        concat[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        concat[i] = s2[j];
        i++;
        j++;    
    }
    return(concat);
}