/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:17:05 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/21 16:25:18 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putchar_fd(char c, int fd);

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}