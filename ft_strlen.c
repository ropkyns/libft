/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:54:07 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/22 18:45:08 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char * str);

size_t ft_strlen(const char * str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

/* int main(void)
{
    char *str = "23nfvnniv";
    
    printf("%lu", ft_strlen(str));
    printf("%lu", strlen(str));
    return 0;
} */