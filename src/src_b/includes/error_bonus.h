/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:50:02 by jgo               #+#    #+#             */
/*   Updated: 2023/01/14 18:42:13 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_BONUS_H
# define ERROR_BONUS_H

# define ERR_ARGS "❌Incorrect number of arguments"
# define ERR_PATH_OPEN "❌Unable to open the file for that pa_bonus.h"
# define ERR_LINE_LEN "❌Each line has a different leng_bonus.h"
# define ERR_ALLOCATE "❌Memory allocation failed"
# define ERR_INVALID_MAP "❌This map is an invalid"
# define ERR_INVALID_PATH "❌This path is an invalid"

// error.c
int		err_terminate_process(char *str);
void	input_error_handler(int ac, int init_fd);
void	allocate_error_handler(void	*ptr);
void	path_error_handler(const char *path);

#endif