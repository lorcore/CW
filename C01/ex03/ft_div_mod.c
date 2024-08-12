/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpray <lpray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:07:24 by lpray             #+#    #+#             */
/*   Updated: 2024/08/12 18:33:29 by lpray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	ai;
// 	int	aj;

// 	i = 20;
// 	j = 6;
// 	ft_div_mod(i, j, &ai, &aj);
// 	printf("div = %d, mod = %d", ai, aj);
// }
