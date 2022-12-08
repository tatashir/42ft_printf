/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:25:45 by tatashir          #+#    #+#             */
/*   Updated: 2022/12/08 16:58:07 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		n = 1473483648;
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}

int	ft_put_u_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count += ft_put_u_nbr(INT_MIN);
	if (n < 10)
		count += ft_put_u_nbr(n + '0');
	else
	{
		count += ft_put_u_nbr(n / 10);
		count += ft_put_u_nbr(n % 10);
	}
	return (count);
}
