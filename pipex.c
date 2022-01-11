/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 19:43:26 by aboumadi          #+#    #+#             */
/*   Updated: 2022/01/10 20:16:29 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	proc_child1(int fd1, char **argv, char **env, int *fd)
{
	char	**paths;
	char	*path;
	char	**cmd;

	paths = find_path(env);
	cmd = ft_split(argv[2], ' ');
	if (cmd[0][0] == '/')
	{
		if (!access(cmd[0], X_OK))
			path = cmd[0];
	}
	else
		path = joinpath(paths, cmd[0]);
	dup2(fd1, 0);
	dup2(fd[1], 1);
	close(fd[0]);
	close(fd[1]);
	execve(path, cmd, env);
}

void	proc_child2(int fd2, char **argv, char **env, int *fd)
{
	char	**paths;
	char	*path;
	char	**cmd;

	paths = find_path(env);
	cmd = ft_split(argv[3], ' ');
	if (cmd[0][0] == '/')
	{
		if (!access(cmd[0], X_OK))
			path = cmd[0];
	}
	else
		path = joinpath(paths, cmd[0]);
	dup2(fd2, 1);
	dup2(fd[0], 0);
	close(fd[1]);
	close(fd[0]);
	execve(path, cmd, env);
}

int	ft_child_1(char **argv, char **env, int *fd)
{
	int	id1;
	int	fd1;

	id1 = fork();
	ft_error(0, "x", NULL, id1);
	if (id1 == 0)
	{
		fd1 = open(argv[1], O_RDONLY);
		ft_error(fd1, argv[1], NULL, 0);
		proc_child1(fd1, argv, env, fd);
	}
	return (id1);
}

int	ft_child_2(char **argv, char **env, int *fd)
{
	int	id2;
	int	fd2;

	id2 = fork();
	ft_error(0, "x", NULL, id2);
	if (id2 == 0)
	{
		fd2 = open(argv[4], O_RDWR | O_TRUNC | O_CREAT, 0777);
		ft_error(fd2, argv[4], NULL, 0);
		proc_child2(fd2, argv, env, fd);
	}
	return (id2);
}

int	main(int argc, char **argv, char **env)
{
	int	id1;
	int	id2;
	int	fd[2];

	if (argc != 5)
	{
		write (1, "error of arguments\n", 19);
		exit (0);
	}
	pipe(fd);
	id1 = ft_child_1(argv, env, fd);
	id2 = ft_child_2(argv, env, fd);
	close(fd[1]);
	close(fd[0]);
	waitpid(id1, NULL, 0);
	waitpid(id2, NULL, 0);
}
