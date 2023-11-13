#include <stdlib.h>

//
// Created by juba on 09/11/23.
//

//used in ft_lstadd etc
void   del(void *content)
{
	if (content)
		free(content);
}