/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:13:14 by jgo               #+#    #+#             */
/*   Updated: 2022/12/28 18:50:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "declaration.h"
#include "error.h"

t_bool	is_valid_dot(char *dot)
{
	int i;

	i = 0;
	if (dot[i] == '-' || dot[i] == '+')
		i++;
	while (ft_isdigit(dot[i]))
		i++;
	if (i)
		return (TRUE);
	else
		return (FALSE);
}

void	cal_z(t_map *map, char **split_arr)
{
	int	i;
	int	num;

	i = 0;
	while (split_arr[i])
	{
		num = ft_atoi(&split_arr[i][0]);
		if (map->max.axis[Z] < num)
			map->max.axis[Z] = num;
		if (map->z_min > num)
			map->z_min = num;
		if (!is_valid_dot(&split_arr[i][0]))
			err_terminate_process(ERR_INVALID_MAP);
		i++;
	}
}

int	cal_line_len(char **split_arr)
{
	int	len;

	len = 0;
	while (split_arr[len] && split_arr[len][0] != '\n')
		len++;
	return (len);
}