/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 23:00:16 by mykman            #+#    #+#             */
/*   Updated: 2020/09/11 23:07:25 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;
	int i;

	n = 0;
	i = 1;
	while (i == 1)
	{
		if (str[n] == 0)
		{
			i = 0;
			n--;
		}
		n++;
	}
	return (n);
}
