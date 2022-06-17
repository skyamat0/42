/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakurai <ymt.cherbr23@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:07:30 by ysakurai          #+#    #+#             */
/*   Updated: 2022/01/09 16:11:14 by ysakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
