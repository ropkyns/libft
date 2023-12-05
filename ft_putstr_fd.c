/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:52:05 by ropkyns           #+#    #+#             */
/*   Updated: 2023/12/04 12:44:32 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd);

void ft_putstr_fd(char *s, int fd)
{
    int i;

    if (s == NULL)
        return ;
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}