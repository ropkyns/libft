/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:25 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/29 21:38:16 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

if(start >= ft_strlen(s))
	{
		sub = malloc(sizeof(char) * 1);
		if(!sub)
			return(NULL);
		sub[0] = 0;
		return(sub);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL || !s)
		return (NULL);
	i = 0;
	j = start;
	while (s[j] && i < len && len > 0 && (char)s[start])
	{
		sub[i] = (char)s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int main(void)
{
	char * s = "Ceci est un test";
	printf("%lu\n", strlen(s));
	printf("%s\n%s", s, ft_substr(s, 12, 4));
	return(0);
} */