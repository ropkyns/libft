/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:23:33 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/30 12:24:30 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t number, size_t size);

void *ft_calloc(size_t number, size_t size)
{
    void    *ptr;
    ptr = malloc(size * number);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, number * size);
    return (ptr);
}