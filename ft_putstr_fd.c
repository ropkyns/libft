/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:52:05 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/26 19:26:48 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd);

void ft_putstr_fd(char *s, int fd)
{
    int len;

    len = strlen(s);
    while(s[len])
    {
        write(fd, &s[len], 1);
    }
}