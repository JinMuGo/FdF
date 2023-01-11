/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:48:38 by jgo               #+#    #+#             */
/*   Updated: 2023/01/11 16:50:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "declaration.h"
#include "hooks.h"

void	hooks(t_meta *meta)
{
	key_hooks(meta);
	mouse_hooks(meta);
	// mlx_loop_hook() 지구본이 빙글빙글 돌아가는 걸 만들자! 
}