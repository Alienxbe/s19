/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:51:11 by mykman            #+#    #+#             */
/*   Updated: 2020/09/21 23:33:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	**ft_split(char *src, char *charset);

int		main(void)
{
	char src[] = "Bonjour Tchoupe comment vas-tu";
	char **tab;

	tab = ft_split(src, " ");
	printf("%s\n", tab[0]);
	return (0);


}
