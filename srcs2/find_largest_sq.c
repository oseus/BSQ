/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   find_largest_sq.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 14:06:07 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 16:41:18 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/my.h"

int		ft_cmp_val(char **tab, int i, int j)
{
	if (tab[i][j-1] <= tab[i - 1][j])
	{	
		if(tab[i][j - 1] <= tab[i - 1][j - 1])
			return (tab[i][j - 1]);
	}
	else if (tab[i - 1][j] <= tab[i][j - 1])
	{
		if(tab[i - 1][j] <= tab[i - 1][j - 1])
			return (tab[i - 1][j]);
	}
	return (tab[i - 1][j - 1]);
}

int		find_largest_sq(char **src, int x, int y, char empty, char wall)
{
	char	**tab;
	int		i;
	int		j;
	int		res;

	i = 0;
	j = 1;
	res = 0;
	//fonction de david
	while ( j < y)
	{
		while (i < x)
		{
			if (i == 0)
				i++;
			if (tab[j][i] > 0)
				tab[j][i] = 1 + ft_cmp_val(tab, i, j);
			if (tab[j][i] > res)
				res = tab[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	return (res);
}
