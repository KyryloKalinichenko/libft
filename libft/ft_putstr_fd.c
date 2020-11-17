/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:01:20 by kkalinic          #+#    #+#             */
/*   Updated: 2020/11/17 15:58:13 by kkalinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int i;

	i = -1;
	if (s != NULL)
	{
		while (s[++i] != '\0')
			ft_putchar_fd(s[i], fd);
	}
}
