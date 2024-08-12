/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpray <lpray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:05:59 by lpray             #+#    #+#             */
/*   Updated: 2024/08/12 18:36:29 by lpray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}

// int	main(void)
// {
// 	int array[] = {1, 2, 3};
// 	int size = sizeof(array) / sizeof(array[0]);

// 	ft_rev_int_tab(array, size);

// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	return (0);
// }