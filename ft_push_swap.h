/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas- <icaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:03:26 by icaldas-          #+#    #+#             */
/*   Updated: 2026/03/10 09:50:20 by icaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h> /* Isso serve pro print, precisa tirar depois */

void	ft_error_handling(int argc, char **argv);

//Funções auxiliares de error
int		ft_strcmp(const char *s1, const char *s2);
long    ft_atol(const char *str);
void	ft_error_message(char *str);

#endif
