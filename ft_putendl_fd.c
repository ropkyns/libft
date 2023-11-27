/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:31:38 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/27 14:06:28 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
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