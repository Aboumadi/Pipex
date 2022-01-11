/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:18:44 by aboumadi          #+#    #+#             */
/*   Updated: 2022/01/10 19:00:12 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(int fd, char *argv, char *cmd, int id)
{
	if (fd < 0)
	{
		write(1, strerror(errno), ft_strlen(strerror(errno)));
		write(1, ": ", 2);
		write(1, argv, ft_strlen(argv));
		write(1, "\n", 1);
		exit (0);
	}
	if (id < 0)
	{
		write (1, strerror(errno), ft_strlen(strerror(errno)));
		exit (0);
	}
	if (!argv)
	{
		write(1, "Command not found", 17);
		write(1, ": ", 2);
		write (1, cmd, ft_strlen(cmd));
		write(1, "\n", 1);
		exit (0);
	}
}

char	**find_path(char **env)
{
	char	*str;
	char	**str2;
	int		i;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH=", 5) == 0)
			break ;
		i++;
	}
	str = ft_substr(env[i], 5, ft_strlen(env[i]));
	str2 = ft_split(str, ':');
	free (str);
	return (str2);
}

char	*joinpath(char **str, char *cmd)
{
	char	*s;
	char	*s1;
	int		i;

	i = 0;
	s = ft_strjoin("/", cmd);
	while (str[i])
	{
		s1 = ft_strjoin(str[i], s);
		if (!access(s1, X_OK))
			break ;
		free (s1);
		i++;
	}
	ft_error(0, str[i], cmd, 0);
	free (s);
	return (s1);
}
