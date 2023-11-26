/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:23:33 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/26 19:18:20 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size);

void *calloc(size_t nmemb, size_t size)
{
    void * ptr;
    ptr = malloc(sizeof(size) * nmemb);
    if (ptr == NULL || nmemb == 0 || size == 0)
        return(NULL);
    ft_bzero(ptr, nmemb);
    return(ptr);
}