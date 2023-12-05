/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropkyns <ropkyns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:22 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/05 17:46:55 by ropkyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

static  char ** ft_allocf(char ** splited, int i)
{
    i--;
    while(i >= 0)
    {
        free(splited[i]);
        i--;
    }
    return(NULL);
}
static int countwords(char const *s, char c)
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

static char * splup(char * s, int i, int c)
{
    int sep;
    char * dup;
    int j;

    sep = i;
    while (s[sep] != c && s[sep])
        sep++;
    dup = malloc(sizeof(char) * (sep - i + 1));
    j = 0;
    if (!dup)
        return (NULL);
    while (i < sep)
    {
        dup[j] = s[i];
        j++;
        i++;
    }
    dup[j] = '\0';
    return (dup);
}

char **ft_split(char const *s, char c)
{
    char ** splited;
    int count;
    int i;
    int j;

    i = 0;
    j = 0;
    count = countwords(s, c);
    splited = malloc(sizeof(char *) * (count + 1));
    if (!splited)
        return (NULL);
    while ((char)s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i])
        {
            splited[j] = splup((char *)s, i, c);
            if (!(splited[j]))
                return(ft_allocf(splited, i));
        }
        while (s[i] != c && s[i])
            i++;
        j++;
    }
    splited[j] = NULL;
    return (splited);
}

/* int main(void)
{
    char	**expected = (char*[6]){"split  ", "this", "for", "me", "!", NULL};
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **result = ft_split(s, '|');

	while (result[i])
	{
		if (strcmp(result[i], *expected))
		{
			printf("TEST_FAILED");
		}
        printf("ggjrduigvnm\n");
		free(result[i]);
		i++;
		expected++;
	}
	free(result);
	printf("TEST_SUCCESS");

    int i = 0;
    char * str = "split  ||this|for|me|||||!|";
    char ** split = ft_split(str, '|');
    while(split[i])
    {
        printf("%s,\n", split[i]);
        i++;
    }
    return(0);
} */