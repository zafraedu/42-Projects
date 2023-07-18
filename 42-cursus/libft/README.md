![header libft](./public/header_libft.png)

<div align="center">
    <img src='https://img.shields.io/badge/Málaga-00599C?style=flat&logo=42&logoColor=white'/>
    <img src="https://img.shields.io/badge/status-finished-success?color=%2300599C&style=flat" />
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2300599C&style=flat" />
    <img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white" />
</div>

---

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norme">Norminette</a> •
	<a href="#license">License</a>
</p>

## ABOUT
El primer proyecto en 42, libft, consiste en aprender cómo funcionan las funciones estándar de la programación C escribiéndolas desde cero y creando una biblioteca personal. Este proyecto es vital ya que la biblioteca se utilizará en asignaciones futuras en 42.
Tendrás que programar una [librería](./inc/libft.h) en C. Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas.

[Click aquí](./public/es_subject.pdf) para ver el `PDF` del proyecto
> Para una información más detallada de las funciones entrar a la [Wiki](https://github.com/zafraedu/42/wiki) de este repositorio

## HOW TO USE
### Compilation
#### Clonar el repositorio
```bash
git clone git@github.com:zafraedu/42.git
```
> Este no es el repositorio de libft y si de todos los proyectos de 42

#### Entrar en el repositorio del proyecto y ejecurar `make`
```bash
cd 42/42-cursus/libft
make
```

#### Para usar en tu código, incluye el encabezado
```c
#include "ruta/libft.h"
```

### Makefile Rules
- `make` - Compila los archivos ***mandatory*** de libft y genera *libft.a*;
- `make bonus` - Compila los archivos ***bonus*** y los agrega al *libft.a*;
- `make clean` - Eliminas todos los objetos (*.o) generados al compilar;
- `make fclean` - Elimina todos los objetos más el libft.añ
- `make re` - usa `make fclean` + `make`;

## MANDATORY
### Funciones libc
Deberás rehacer algunas funciones de la *libc*. Tus funciones tendrán los mismos prototipos e implementarán los mismos comportamientos que las funciones originales.

Deberán ser tal y como las describe el `man`, la única diferencia será la nomenclatura: empezarán con el prefijo `ft_`.

| Function | Description |
| -------- | ----------- |
|[ft_isalpha](./src/ft_isalpha.c) |verifica si el caracter `c` es **alfabetico**                                   |
|[ft_isdigit](./src/ft_isdigit.c) |verifica si el caracter `c` es **numerico**                                     |
|[ft_isalnum](./src/ft_isalnum.c) |verifica si el caracter `c` es **alfabetico** o **numerico**                    |
|[ft_isascii](./src/ft_isascii.c) |verifica si el caracter `c` está en la tabla **ascii**                          |
|[ft_isprint](./src/ft_isprint.c) |verifica si el caracter `c` es **imprimible**                                   |
|[ft_strlen](./src/ft_strlen.c)   |calcula la **longitud** de la cadena `str`                                      |
|[ft_memset](./src/ft_memset.c)   |cambia los valores de los `size` primeros datos de  `str` por `c`               |
|[ft_bzero](./src/ft_bzero.c)     |convierte en **nulo** los valores de los `size` primeros datos de `str`         |
|[ft_memcpy](./src/ft_memcpy.c)   |copia los primeros `size` valores de `str` por `c`                              |
|[ft_memmove](./src/ft_memmove.c) |copia los primeros `size` valores de `src` a `dest` (hasta si se superponen)    |
|[ft_srtlcpy](./src/ft_strlcpy.c) |copia los primeros `size` caracteres de `src` a `dest`                          |
|[ft_strlcat](./src/ft_strlcat.c) |concatena `src` en `dest` hasta que **este** llegue a su maximo`size`           |
|[ft_toupper](./src/ft_toupper.c) |convierte el caracter `c` en **mayuscula**                                      |
|[ft_tolower](./src/ft_tolower.c) |convierte el caracter `c` en **minuscula**                                      |
|[ft_strchr](./src/ft_strchr.c)   |busca la **primera** aparición del caracter `c` en la cadena `str`              |
|[ft_strrchr](./src/ft_strrchr.c) |busca la **última** aparición del caracter `c` en la cadena `str`               |
|[ft_strncmp](./src/ft_strncmp.c) |compara los primeros `size` de **caracteres** de las cadenas `s1` y `s2`        |
|[ft_memchr](./src/ft_memchr.c)   |busca la primera aparición del byte `c` en `str` hasta el tamaño maximo`size`   |
|[ft_memcmp](./src/ft_memcmp.c)   |compara los primeros `size` de **datos** de `s1` y `s2`                         |
|[ft_strnstr](./src/ft_strnstr.c) |busca la primera aparición de la **subcadena** `needle` en la cadena `haystack` |
|[ft_atoi](./src/ft_atoi.c)       |convierte `str` en un `int`                                                     |
|||
|[ft_calloc](./src/ft_calloc.c)   |asigna **Mermoria Dinamica** a una string empezada por datos **nulos**          |
|[ft_strdup](./src/ft_strdup.c)   |asigna **MD** a una string que contien `str`                                    |


### Funciones adicionales
Deberás desarrollar un conjunto de funciones que, o no son de la librería *libc, o lo son pero de una forma distinta.

Implementarás las siguientes funciones:

| Function | Description |
| -------- | ----------- |
|[ft_substr](./src/ft_substr.c)         |asigna MD a una string creada a partir del **indice**`start` de `s` con la longitud`len`                        |
|[ft_strjoin](./src/ft_srtjoin.c)       |asigna MD a una string creada a partir de la **concatenación** de `s1` cocn `s2`                                |
|[ft_strtrim](./src/ft_strtrim.c)       |asigna MD a una string que contiene `str` **sin** los caracteres `set`                                          |
|[ft_split](./src/ft_split.c)           |asigna MD a un **array de strings** al separar la string `s` en substrings con el caracter `c` como delimitador |
|[ft_itoa](./src/ft_itoa.c)             |convierte un `n` **int** a una string MD                                                                        |
|[ft_striteri](./src/ft_striteri.c)     |aplica la función `f` en cada caracter de la cadena `s`                                                         |
|[ft_putchar_fd](./src/ft_putchar_fd.c) |imprime el caracter `c` al `fd`                                                                                 |
|[ft_putstr_fd](./src/ft_putstr_fd.c)   |imprime la string `s` al `fd`                                                                                   |
|[ft_putendl_fd](./src/ft_putendl_fd.c) |imprime `s` al `fd` con un **salto de linea** al final                                                          |
|[ft_putnbr_fd](./src/ft_putnbr_fd.c)   |imprime el numero `n` al `fd`                                                                                   |
> MD -> Memoria Dinamica
>
> fd -> file descriptor


## BONUS
Las funciones para manipular memoria y strings son muy útiles... Pero pronto descubrirás que la manipulación de listas lo es incluso más.

Deberás utilizar la siguiente estructura para representar un nodo de tu lista.

### Estructura
Añade la declaración a tu archivo `libft.h`:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```
- `content`: la información contenida por el nodo, que permite guardar cualquier tipo de información.
- `next`: la dirección del siguiente nodo, o `NULL` si nodo es el último.

### Funciones bonus
Implementa las siguientes funciones para manipular listas:

| Function | Description |
| -------- | ----------- |
|[ft_lstnew](./src/ft_lstnew_bonus.c)             |crea un nuevo **nodo** y establece su contenido `content` y puntero siguiente `next`                |
|[ft_lstadd_front](./src/ft_lstadd_front_bonus.c) |añade el nodo `new` al **principio** de la lista `*lst`                                             |
|[ft_lstsize](./src/ft_lstsize_bonus.c)           |cuenta el numero de nodos que hay en la lista `*lst`                                                |
|[ft_lstlast](./src/ft_lstlast_bonus.c)           |va al **ultimo nodo** de la lista`*lst`                                                             |
|[ft_lstadd_back](./src/ft_lstadd_back_bonus.c)   |añade el nodo `new` al **final** de la lista `**lst`                                                |
|[ft_lstdelone](./src/ft_lstdelone_bonus.c)       |elimina el nodo de una lista y **libera** la memoria asociada a dicho nodo                          |
|[ft_lstclear](./src/ft_lstclear_bonus.c)         |elimina **todos** los nodos de una lista y **libera** la memoria asociada a dichos nodos            |
|[ft_lstiter](./src/ft_lstiter_bonus.c)           |aplica la función a cada elemento`content` de la lista enlazada`lst`                                |
|[ft_lstmap](./src/ft_lstmap_bonus.c)             |crea una **nueva lista** enlazada aplicando la funcion `f` a cada elemento de la **lista original** |

## NORME
En 42 School, se espera que casi todos los proyectos se escriban de acuerdo con la Norma, que es el estándar de codificación de la escuela.
```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be a maximum of 25 lines, not counting the function's curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static)
- You can't declare more than 5 variables per function
- ...
```
[42 NORMA]() información sobre las normas de código de 42. `PDF`

## LICENSE
Este trabajo se publica bajo los términos de [42 Unlicense]().
