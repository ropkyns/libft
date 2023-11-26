/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:46:36 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/27 00:02:59 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c);

int ft_isascii(int c)
{
	if((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}

/* int main(void)
{
	int c = 1288;
	
	printf("%d", ft_isascii(c));
	printf("%d", isascii(c));
	return 0;
} */