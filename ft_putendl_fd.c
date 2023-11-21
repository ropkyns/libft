/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:31:38 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/21 10:40:14 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unsitd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd);

void ft_putstr_fd(char *s, int fd)
{
    int len;

    len = strlen(s);
    while(s[len])
    {
        write(fd, s[len], 1);
    }
    write(1, '\n', 1);
}