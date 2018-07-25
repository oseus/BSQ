/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 12:44:20 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 13:03:07 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/my.h"

int     ft_check_error(int fd, char **str, char **line)
{
	if (fd == -1 || line == NULL)
		return (-1);
	return (0);
}

char    *ft_read_line(char *str, int fd)
{
	char buff[BUFF_SIZE + 1];
	int ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strcat(str, buff);
	}
	return (str);
}

int     ft_next_line(int fd, char **line)
{
	static char *str;

	if (ft_check_error(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	str = ft_read_line(str, fd);
}
