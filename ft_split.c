/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:24:22 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:39:42 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

static int	is_c(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static char	**ft_allocf(char **splited, int i)
{
	i--;
	while (i >= 0)
	{
		free(splited[i]);
		i--;
	}
	return (NULL);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] != '\0' && is_c(str[i], c) == 1)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] != '\0' && is_c(str[i], c) == 0)
			i++;
	}
	return (words);
}

static char	*splup(char *s, int i, int c)
{
	int		sep;
	char	*dup;
	int		j;

	sep = i;
	while (is_c(s[sep], c) == 0 && s[sep])
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

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	count = count_words(s, c);
	splited = (char **)malloc(sizeof(char *) * (count + 1));
	if (!splited)
		return (NULL);
	while (s[i])
	{
		while (is_c(s[i], c) == 1 && s[i])
			i++;
		if (s[i])
		{
			splited[++j] = splup((char *)s, i, c);
			if (!(splited[j]))
				return (ft_allocf(splited, i));
		}
		while (is_c(s[i], c) == 0 && s[i])
			i++;
	}
	return (splited[j] = 0, splited);
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