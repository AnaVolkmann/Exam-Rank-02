/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-lda- <ana-lda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:08:06 by ana-lda-          #+#    #+#             */
/*   Updated: 2024/06/30 18:50:53 by ana-lda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
    int i;
    int flag;

	if (argc == 2)
	{
	    i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
        	    i += 1;
		while (argv[1][i])
	  	{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag)
                	write (1, " ", 1);
            	flag = 0;
            	write (1, &argv[1][i], 1);
           	}
			i += 1;
		}
	}
	write (1, "\n", 1);
    return (0);
}
