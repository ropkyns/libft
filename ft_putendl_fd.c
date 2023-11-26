/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:31:38 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/26 14:54:19 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd);

void ft_putstr_fd(char *s, int fd)
{
    int len;
    char endl;

    len = strlen(s);
    endl = '\n';
    while(s[len])
    {
        write(fd, &s[len], 1);
    }
    write(1, &endl, 1);
}