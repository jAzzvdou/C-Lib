/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:16:29 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 00:21:06 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define BUFFER_SIZE 4096

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

<functions>

#endif /* LIBFT_H */
