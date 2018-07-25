/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   my.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 11:00:31 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 11:03:02 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/uio.h>

void	ft_putchar(char c);
void	ft_error_putchar(char c);
void	ft_putstr(char *str);
void	ft_error_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_get_line(char *str, int fd);
char	*ft_read_line(char *str, int fd);
int		ft_check_error(int fd, char **str, char **line);
int		ft_atoi(char *str);

#endif
