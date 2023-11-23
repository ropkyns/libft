/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:45:11 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/23 12:52:51 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set);

int ft_check(char * set, char c)
{
    int i;

    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return(0);
        i++;
    }
    return(1);
}

char *ft_strtrim(char const *s, char const *set)
{
    int start;
    int end;
    char * trim;
    int i;

    start = 0;
    while(!ft_check((char *)set, (char)s[start]) && (char)s[start])
        start++;
    end = strlen((char *)s) -1;
    while(!ft_check((char *)set, (char)s[end]) && (char)s[end])
        end--;
    trim = malloc(sizeof(char) * (end - start + 1));
    if(!trim)
        return(NULL);
    i = 0;
    while(start <= end)
    {
        trim[i] = (char)s[start];
        i++;
        start++;
    }
    return(trim);
}

int main(void)
{
    char * c = "lollloool TEST TEST looolLLlol";
    char * set = "lol";

    printf("string : %s\n", c);
    printf("set : %s\n", set);
    printf("trimmed : %s", ft_strtrim(c, set));
    return(0);
}