/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:01:04 by mykman            #+#    #+#             */
/*   Updated: 2020/09/19 09:57:43 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);
int		char_in_str(char c, char *str);

int		main(void)
{
	char base[] = "01";
	//char str[] = "  \f	 \t \v \r-+----+-----+-2130459";
	
	//printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi_base("\r\t\v\f      ---++++-+-10011000", base));
	//ft_putnbr_base(-42, base);
	return (0);
}
