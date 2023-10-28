/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmetpo <mehmetpo@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:56:04 by mehmetpo          #+#    #+#             */
/*   Updated: 2023/10/14 23:45:39 by mehmetpo         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arry;

	arry = (void *)malloc(nmemb * size);
	if (arry == NULL)
		return (NULL);
	ft_bzero(arry, (nmemb * size));
	return (arry);
}
