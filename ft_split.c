/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:22 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/23 17:22:57 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

char ** ft_allocf(char ** splited, int i,)
{
    i--;
    while(i >= 0)
    {
        free(splited[i]);
        i--;
    }
    return(NULL);
}
int countwords(char *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] != c && s[i-1] == c)
            count++;
        i++;
    }
    return(count);
}

char * splup(char * s, int i, int c)
{
    int j;
    char * dup;

    j = i;
    while(s[j] != c && s[j])
        j++;
    dup = malloc(sizeof(char) * (j - i));
    while(i < j)
    {
        *dup = s[i];
        dup++;
    }
    return(dup)
}

char **ft_split(char const *s, char c)
{
    char ** splited;
    int count;
    int i;
    int j;

    count = countwords((char *)s, c);
    splited = malloc(sizeof(char *) * count);
    if(splited)
    {
        i = 0;
        j = 0
        while((char)s[i])
        {
            while((char)s[i] == c)
                i++;
            splited[j] = splup((char *)s, i, c);
            if(!splited[j])
                    return(ft_allocf(splited, i));
            while((char)s[i] != c)
                i++;
        }
    }
    return(splited);
}

int main(void)
{
    int i = 0;
    char * str = "lun,mar,mer,jeu,ven,sam,dim";
    char ** split = ft_split(str, ',');
    while(split[i])
    {
        printf("%s,", split[i]);
        i++;
    }
    return(0);
}

            /* if((char)s[j] == c)
            {
                if(j > 0)
                    i++;
                j++;
            }
            else
            {
                
                k = 0;
                while((char)s[j] != c && (char)s[j])
                {
                    word[k] = (char)s[j];
                    j++;
                    k++;
                }
                splited[i] = strdup(word);
                if(!splited[i])
                    return(ft_allocf(splited, i));
                i++;
            } */