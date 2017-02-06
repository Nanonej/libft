/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:49:10 by aridolfi          #+#    #+#             */
/*   Updated: 2017/02/06 14:49:38 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*palloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		exit(1);
	ft_bzero(ptr, size);
	return (ptr);
}
