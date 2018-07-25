/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_error.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 14:55:11 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 16:14:11 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/my.h"

int		ft_check_first_line(char **tab)
{
	int		nb_line;

	nb_line = ft_atoi(tab[0]);
	return (nb_line);
}

int		ft_check_chars_first_line(char **tab, t_struct)
{
	int		i;
	int		j;

	while (tab[j][i] != '\n')
	{
		if (tab[j][i] == '\0')
			return (-1);
		i++;
	}
	t_struct->full = tab[j][i - 1];
	t_struct->obst = tab[j][i - 2];
	t_struct->empt = tab[j][i - 3];
	return (i);
}

int		ft_check_tab(char **tab, t_struct)
{
	int		i;
	int		j;
	int		x_1;

	i = 0;
	j = 1;
	x_1 = 0;
	while (tab[j][i] != '\n')
	{
		if (tab[j][i] == '\0')
			return (-1);
		i++;
	}
	x_1 = (ft_check_chars_first_line(tab, t_struct));
	while (tab[j])
	{
		while ((i != x_1) && ((tab[j][i] == t_struct->empt) || (tab[j][i] == t_struct->obst)))
			i++;
		if ((i != '\n') || (tab[j][i + 1] != '\0'))
			return (-1);
		j++;
	}
	if (j != ft_check_first_line(tab))
		return (-1);
	return (0);
}
