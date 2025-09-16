/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_talk.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:35:11 by joapedro          #+#    #+#             */
/*   Updated: 2025/09/16 15:15:33 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_TALK_H
#define MINI_TALK_H

#define PID_MAX 4194304

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

#include "../libft/libft.h"

int	error_handler(int ac, char **av);

#endif