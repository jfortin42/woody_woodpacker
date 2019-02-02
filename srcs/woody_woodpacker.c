/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   woody_woodpacker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrumbac <agrumbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 18:04:47 by agrumbac          #+#    #+#             */
/*   Updated: 2019/02/02 10:08:10 by agrumbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "woody_woodpacker.h"

void	woody(void)
{
	__unused Elf64_Ehdr		*elf64_hdr = safe(0, sizeof(Elf64_Ehdr));
	__unused Elf64_Phdr		*elf64_program_hdr;
	__unused Elf64_Shdr		*elf64_section_hdr;

	printf("This is an %.4s\n", elf64_hdr->e_ident);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(2, "usage: %s elf64_file\n", av[0]);
		return (EXIT_FAILURE);
	}

	read_file(av[1]);
	woody();
	free_file();

	return (EXIT_SUCCESS);
}
