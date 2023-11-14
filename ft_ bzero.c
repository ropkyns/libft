/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:18 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 18:46:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

void ft_bzero(void *str, size_t n);

void ft_bzero(void *str, size_t n)
{
    int i;

    i = 0
    while (n > 0)
    {
        str[i] = '\0';
        i++;
        n--;
    }
}

/* int main(void)
{
    char *str = "42 cursus go";
    bzero(str, 4);
    printf("%s", str);
} */