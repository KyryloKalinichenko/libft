/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:08:13 by kkalinic          #+#    #+#             */
/*   Updated: 2020/11/17 17:46:39 by kkalinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	/*long nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	while (nb > 0)
	{
		ft_putchar_fd(((nb % 10) + 48), fd);
		nb /= 10;
	}*/
	ft_putstr_fd(ft_itoa(n), fd);
}

int main()
{
	ft_putnbr_fd(54354, 1);
}
