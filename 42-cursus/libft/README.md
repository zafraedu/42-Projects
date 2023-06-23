# Libft
Este proyecto consiste en programar una [librería](./inc/libft.h) en C. Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas.

![badge](https://github.com/byaliego/42-project-badges/blob/main/badges/libftm.png)

## Funciones de libc
| Function | Description |
| -------- | ----------- |
|[ft_isalpha](./src/ft_isalpha.c) |verifica si el caracter `c` es **alfabetico**                                   |
|[ft_isdigit](./src/ft_isdigit.c) |verifica si el caracter `c` es **numerico**                                     |
|[ft_isalnum](./src/ft_isalnum.c) |verifica si el caracter `c` es **alfabetico** o **numerico**                    |
|[ft_isascii](./src/ft_isascii.c) |verifica si el caracter `c` está en la tabla **ascii**                          |
|[ft_isprint](./src/ft_isprint.c) |verifica si el caracter `c` es **imprimible**                                   |
|[ft_strlen](.src/ft_strlen.c)    |calcula la **longitud** de la cadena `str`                                      |
|[ft_memset](.src/ft_memset.c)    |cambia los valores de los `size` primeros datos de  `str` por `c`               |
|[ft_bzero](.src/ft_bzero.c)      |convierte en **nulo** los valores de los `size` primeros datos de `str`         |
|[ft_memcpy](.src/ft_memcpy.c)    |copia los primeros `size` valores de `str` por `c`                              |
|[ft_memmove](.src/ft_memmove.c)  |copia los primeros `size` valores de `src` a `dest` (hasta si se superponen)    |
|[ft_srtlcpy](.src/ft_strlcpy.c)  |copia los primeros `size` caracteres de `src` a `dest`                          |
|[ft_strlcat](.src/ft_strlcat.c)  |concatena `src` en `dest` hasta que **este** llegue a su maximo`size`           |
|[ft_toupper](.src/ft_toupper.c)  |convierte el caracter `c` en **mayuscula**                                      |
|[ft_tolower](.src/ft_tolower.c)  |convierte el caracter `c` en **minuscula**                                      |
|[ft_strchr](.src/ft_strchr.c)    |busca la **primera** aparición del caracter `c` en la cadena `str`              |
|[ft_strrchr](.src/ft_strrchr.c)  |busca la **última** aparición del caracter `c` en la cadena `str`               |
|[ft_strncmp](.src/ft_strncmp.c)  |compara los primeros `size` de **caracteres** de las cadenas `s1` y `s2`        |
|[ft_memchr](./src/ft_memchr.c)   |busca la primera aparición del byte `c` en `str` hasta el tamaño maximo`size`   |
|[ft_memcmp](./src/ft_memcmp.c)   |compara los primeros `size` de **datos** de `s1` y `s2`                         |
|[ft_strnstr](./src/ft_strnstr.c) |busca la primera aparición de la **subcadena** `needle` en la cadena `haystack` |
|[ft_atoi](./src/ft_atoi.c)       |convierte `str` en un `int`                                                     |
|[ft_calloc](./src/ft_calloc.c)   |asigna **Mermoria Dinamica** a una string empezada por datos **nulos**          |
|[ft_strdup](./src/ft_strdup.c)   |asigna **MD** a una string que contien `str`                                    | 


## Funciones adicionales
| Function | Description |
| -------- | ----------- |

## Parte bonus
| Function | Description |
| -------- | ----------- |
