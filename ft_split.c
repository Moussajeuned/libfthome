/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moluse-b <moluse-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:44:47 by moluse-b          #+#    #+#             */
/*   Updated: 2026/11/23 20:44:18 by moluse-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			word++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
	}
	return (word);
}

static void	fill_tab(char **tab, char const *s, char c, size_t nb_word)
{
	size_t	i;
	size_t	j;
	size_t	y;

	i = 0;
	j = 0;
	while (j < nb_word)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		y = i;
		while (s[y] != '\0' && s[y] != c)
			y++;
		tab[j] = ft_substr(s, i, (y - i));
		i = y;
		j++;
	}
	tab[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_word;

	if (s == NULL)
	{
		return (NULL);
	}
	nb_word = count_word(s, c);
	tab = malloc((nb_word + 1) * sizeof(char *));
	if (tab == NULL)
	{
		return (NULL);
	}
	fill_tab(tab, s, c, nb_word);
	return (tab);
}

int	main(void)
{
	char	*se;
	char	**tab;
	int		i;

	se = "    Moussa Faten             ken";
	tab = ft_split(se, ' ');
	i = 0;
	while (tab[i] != NULL)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}