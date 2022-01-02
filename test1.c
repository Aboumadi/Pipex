/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 19:43:26 by aboumadi          #+#    #+#             */
/*   Updated: 2022/01/02 16:18:03 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return ((unsigned char) s1[i] - s2[i]);
}

void	ft_error()
{
		//write (1, "error: command not found\n", 20);
		printf("error: command not found\n");
		exit(0);
}

char	**find_path(char **env)
{
	int i = 0;
	int j = 0;
	char *str;
	char **str2;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH=", 5) == 0)
		{
			j++;
			break;
		}
		i++;
	}
	if (j != 1)
	ft_error();
	str = ft_substr(env[i], 5, ft_strlen(env[i]));
	str2 = ft_split(str, ':');
	free (str);
	return (str2);
}
char	*joinpath(char **str, char *cmd)
{
	char *s;
	char *s1;
	int i = 0;
	s = ft_strjoin("/", cmd);
	while(str[i])
	{
		s1 = ft_strjoin(str[i], s);
	//	printf("------%s--------\n", s1);
		if (!access(s1, X_OK))
			break ;
		free (s1);
		i++;
	}
	return (s1);
}

int main(int argc,char **argv,char **env)
{
	int i;
	char **paths;
	//char **cmds;
	//char *s2 = "ls -la";
	char *path;
	char **cmd;

	i = 0;
	(void)argc;
	(void)argv;
	/*while (env[i])
	{
		printf("%s", env[i]);
		i++;
	}*/
	paths = find_path(env);
	cmd = ft_split(argv[2],' ');
	int f1 = open(argv[1], O_WRONLY | O_CREAT, 0777);
	dup2(f1, 1);
//	printf("%s", argv[0]);
	path = joinpath(paths, cmd[0]);
	execve(path, cmd, env);
	close(f1);
/*	while (str[i])
	{
		printf("the path is : %s\n", str[i]);
		i++;
	}*/
}
