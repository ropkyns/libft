/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:31:38 by ropkyns           #+#    #+#             */
/*   Updated: 2023/12/03 19:19:17 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
    if (!s || fd < 0)
        return ;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}