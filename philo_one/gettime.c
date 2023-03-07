/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <root@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:49:59 by user42            #+#    #+#             */
/*   Updated: 2020/11/04 11:52:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers_philo_one.h"

/*
** Get the time since the epoch in milliseconds
*/

unsigned long	gettime(struct timeval *tv)
{
	gettimeofday(tv, NULL);
	return (tv->tv_sec * 1000 + tv->tv_usec * 0.001);
}
