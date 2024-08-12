/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpray <lpray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:04:13 by lpray             #+#    #+#             */
/*   Updated: 2024/08/12 18:37:50 by lpray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	min_val;
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		min_val = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_val])
			{
				min_val = j;
			}
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min_val];
		tab[min_val] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	array[] = {64, 25, 12, 22, 11};
// 	int	size;

// 	size = sizeof(array) / sizeof(array[0]);
// 	printf("Array before sorting:\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(array, size);
// 	printf("Array after sorting:\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
