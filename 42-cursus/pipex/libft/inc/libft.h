#ifndef LIBFT_H
# define LIBFT_H

/*---------------------------  Librerias  ------------------------------------*/
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*---------------------------  Macros  ---------------------------------------*/
//ft_printf
# define PRINTF_FLAG "0+-# hl"

//get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*---------------------------  Estructuras  ----------------------------------*/
//libft
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//ft_printf
typedef struct s_flags
{
	int				len_h;
	int				len_hh;
	int				len_l;
	int				len_ll;

}					t_flags;
typedef struct s_block
{
	int				ret;
	int				i;
	char			type;
	char			*s;
	va_list			ap;
	t_flags			flags;

}					t_block;

/*---------------------------  Funciones  ------------------------------------*/
//libft
int					ft_atoi(const char *str);
void				ft_bzero(void *str, size_t size);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
char				*ft_sltoa(signed long long sl);
char				*ft_ultoa(unsigned long long ul);
char				*ft_itoa_base(unsigned long long ul, int base);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				*ft_memchr(const void *str, int c, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t size);
void				*ft_memset(void *str, int c, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *str);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t size);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t size);
char				*ft_strrchr(const char *str, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_toupper_str(char *str);

//ft_printf
int					ft_printf(const char *str, ...);
void				reset_block(t_block *b);
void				ft_check_flags(const char *str, t_block *b);
void				ft_check_types(const char *str, t_block *b);
void				ft_converter_cs(char type, t_block *b);
void				ft_converter_id(t_block *b);
void				ft_converter_u(t_block *b);
void				ft_converter_x(char type, t_block *b);
void				ft_converter_o(t_block *b);
void				ft_converter_p(t_block *b);
void				print_char(char c, t_block *b);
void				print_str(t_block *b);
void				print_null(t_block *b);
void				print_dig(t_block *b);

//get_next_line
char				*get_next_line(int fd);
int					ft_strlen_g(char *s);
char				*ft_strchr_g(char *s, int c);
void				*ft_calloc_g(size_t count, size_t size);
char				*ft_strjoin_g(char *s1, char *s2);

#endif
