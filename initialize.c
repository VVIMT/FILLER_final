/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvimo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 18:38:57 by vinvimo           #+#    #+#             */
/*   Updated: 2017/10/01 18:39:01 by vinvimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	initialize(t_struct *t, t_piece *p)
{
	t->x = 0;
	t->y = 0;
	t->i = 0;
	t->j = 0;
	t->superposition = 0;
	t->l_plateau = 0;
	t->h_plateau = 0;
	t->grid = NULL;
	p->i = 0;
	p->j = 0;
	p->piece = NULL;
	p->l_carre = 0;
	p->h_carre = 0;
	p->top = 0;
	p->bot = 0;
	p->left = 0;
	p->right = 0;
	p->ver = 0;
	p->hor = 0;
	p->coorx = NULL;
	p->coory = NULL;
	t->sig = 0;
}
