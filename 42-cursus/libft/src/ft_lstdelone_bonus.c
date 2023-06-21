/*elimina un unico nodo de una lista y libera la memoria asociada a dicho nodo*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
