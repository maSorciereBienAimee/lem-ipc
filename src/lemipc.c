/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemipc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <ssar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:33:00 by ssar              #+#    #+#             */
/*   Updated: 2024/05/21 16:17:09 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lemipc.h"

void lemipc(void)
{
	char *str;
	char *str2;
	char *str3;
	char *str4;
	str = ft_itoa_base(15, "0123456789abcdef", 0);
	str2 = ft_itoa_base(158938, "0123456789abcdef", 0);
	str3 = ft_itoa_base(18, "0123456789", 0);
	str4 = ft_itoa_base(8, "0123456789", 0);
	ft_printf("%s\n", str);
	ft_printf("%s\n", str2);
	ft_printf("%s\n", str3);
	ft_printf("%s\n", str4);
	ft_printf("yoyo\n");
}

int main(void)
{
	lemipc();
}
