/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:16:34 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/06 23:26:01 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*rs;

	rs = (t_btree*)malloc(sizeof(t_btree));
	rs->item = item;
	rs->left = 0;
	rs->right = 0;
	return (rs);
}
