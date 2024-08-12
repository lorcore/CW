/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpray <lpray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:16:32 by lpray             #+#    #+#             */
/*   Updated: 2024/08/12 18:44:47 by lpray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 20;
// 	j = 6;
// 	ft_ultimate_div_mod(&i, &j);
// 	printf("i = %d, j = %d", i, j);
// }
