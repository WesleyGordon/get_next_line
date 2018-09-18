/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 09:35:29 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/20 09:39:57 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\n' ||
			c == '\t' || c == '\v' ||
			c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}
