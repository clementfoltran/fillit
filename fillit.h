#ifndef FILLIT_H
# define FILLIT_H
# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 21
# define FILENAME "usage: ./fillit filename"

typedef struct 			s_coord
{
	int					x[4];
	int					y[5];
	struct s_coord		*next;
}						t_coord;

typedef struct 		    s_tetri

{
	char			    **tetri;
	char			    id;
	t_coord			    point;
	struct s_list 	    *next;
}					    t_tetri;

void				ft_tetriadd(t_tetri **tetri, t_tetri *new);
t_coord				*ft_coordnew(int	x[4], int y[5]);
t_tetri				*ft_tettrinew(char **tetri, char id, t_coord point);

#endif
