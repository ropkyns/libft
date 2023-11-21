/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:45:13 by ropkyns           #+#    #+#             */
/*   Updated: 2023/11/21 15:17:22 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd);

void ft_putnbr_fd(int n, int fd)
{
    write(fd, &n, 1);
}