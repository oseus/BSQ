/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fill_tab.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 18:16:24 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 09:23:43 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_line_size(char *str)
{
	int		i;

	i = 0;
	while ((str[i] != '\n') && str[i])
		i++;
	str++;
	return (i);
}

int		ft_count(char *str)
{
	int		i;
	int		c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			c++;
		i++;
	}
	return (c);
}

char	**ft_fill_tab(char *str)
{
	int		y;
	int		x;
	int		nb_line;
	char	**tab;
	char	*tab_line;

	y = 0;
	x = 0;
	nb_line = ft_count(str);
	tab = (char**)malloc(sizeof(char*) * nb_line + 1);
	while (y < nb_line)
	{
		tab_line = (char*)malloc(sizeof(char) * (ft_line_size(str) + 2));
		while (*str != '\n')
			tab_line[x++] = *str++;
		tab_line[x] = '\n';
		tab_line[x + 1] = '\0';
		//printf("%s", tab_line);
		tab[y++] = tab_line;
		printf("%s", *tab);
		free(tab_line);
		str++;
		x= 0;
	}
	//tab[y] = 0;
	//printf("%s", *tab);
	return (tab);
}
/*	while (str[i])
	{
		x = 0;
		while (str[i] != '\n')
		{
			tab[y] = ;
			x++;
			i++;
		}
		tab[y][x] = '\0';
		y++;
		i++;
	}
	printf("%s", *tab);
	return (tab);
}*/

int		main(void)
{
	int		y;
	char **tab;
	y = 0;
	char *str = "...ooo\n.ooo..\n..o..o\n";

	tab = ft_fill_tab(str);
	/*while ( y < 4)
	{
		printf("%s", tab[y]);
		y++;
	}*/
	return (0);
}
