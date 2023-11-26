/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:06 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/26 14:36:53 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c);

int ft_isalpha(int c)
{
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        return 1024;
    else
        return 0;
}

/* int main(void)
{
    int c = 'q';
    
    printf("%d", ft_isalpha(c));
    printf("%d", isalpha(c));
    return 0;
} */