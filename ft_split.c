/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:22 by paulmart          #+#    #+#             */
/*   Updated: 2023/11/24 13:06:31 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

char ** ft_allocf(char ** splited, int i)
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
    int sep;
    char * dup;
    int j;

    sep = i;
    while(s[sep] != c && s[sep])
        sep++;
    dup = malloc(sizeof(char) * (sep - i + 1));
    j = 0;
    if(!dup)
        return(NULL);
    while(i < sep)
    {
        dup[j] = s[i];
        j++;
        i++;
    }
    dup[j] = '\0';
    return(dup);
}

char **ft_split(char const *s, char c)
{
    char ** splited;
    int count;
    int i;
    int j;

    i = 0;
    j = 0;
    count = countwords((char *)s, c);
    splited = malloc(sizeof(char *) * (count + 1));
    if(splited)
    {
        while((char)s[i])
        {
            while((char)s[i] == c && (char)s[i])
            i++;
            splited[j] = splup((char *)s, i, c);
            if(!(splited[j]))
                return(ft_allocf(splited, i));
            while((char)s[i] != c && (char)s[i])
                i++;
            j++;
        }
        splited[j] = 0;
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
        printf("%s\n", split[i]);
        i++;
    }
    return(0);
}