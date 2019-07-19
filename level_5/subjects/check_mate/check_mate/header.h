#ifndef HEADER_H
# define HEADER_H

# include "unistd.h"

typedef struct	s_m
{
	int			debug;
	int			ac;
	char		**av;
	int			len;
	char		enemy;
	int			mate;
	int			act_x;
	int			act_y;
	int			off_x;
	int			off_y;
}				t_m;

t_m				m_init(int ac, char **av);
void			execute(t_m *m);
int				is_in_range(t_m *m, int x, int y);
int				is_king(t_m *m, int x, int y);
int				is_enemy(t_m *m, int x, int y);
void			check_enemy(t_m *m, int x, int y);
void			final_print(t_m *m);

#endif
