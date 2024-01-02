![header get_next_line](./public/header_get_next_line.png)

<div align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/evaluated-15%20%2F%2006%20%2F%202023-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white" />
	<img src='https://img.shields.io/badge/Málaga-00599C?style=flat&logo=42&logoColor=white'/>
</div>

---

<p align="center">
	<a href="#about">About</a> •
	<a href="#usage">Usage</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norme">Norminette</a> •
	<a href="#license">License</a>
</p>

## About
El proyecto "get_next_line" en 42 nos enseña cómo leer desde un descriptor de archivo y usar variables estáticas.
Esta función recupera una sola línea de un descriptor de archivo especificado. Cuando se llama en un bucle,
"get_next_line" devuelve todo el contenido del archivo, una línea a la vez hasta que se alcanza el final del archivo.
Además, esta función se puede compilar con cualquier tamaño de búfer especificado.

[Click aquí](./public/es_subject.pdf) para ver el `PDF` del proyecto.


## Usage
>Esta función no es un programa independiente, sus archivos deben incluirse y compilarse dentro de otro proyecto.

Para usar en tu código, incluye el encabezado:
```c
#include "ruta/get_next_line.h"
```

Para el ejemplo creamos un archivo `main.c`.
```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "./inc/get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	fd = close(fd);
	return (0);
}
```
Compilamos el codigo con sus respectivas flags
```bash
gcc -Werror -Wextra -Wall -D BUFFER_SIZE=42 main.c src/*.c
```
> `-Werror` `-Wextra` `-Wall` son flags de gestión de errores que solicita la [norma](https://github.com/zafraedu/42/blob/master/public/es_norm.pdf).
>
> `BUFFER_SIZE` se puede especificar en la compilación para anular el `BUFFER_SIZE` predeterminado (es opcional en la compilacíon)

Ejecutamos el programa con un *archivo* como parametro
```bash
./a.out [file]
```
En la salida del programa deberia imprimir por la terminal todas las lineas
del archivo especificado como parametro (`[file]`).


## Mandatory

<table>
  <tr>
    <td><strong>Nombre de la función</strong></td>
    <td><em>get_next_line</em></td>
  </tr>
  <tr>
    <td><strong>Archivos a entregar</strong></td>
    <td><code>get_next_line.h</code>, <code>get_next_line.c</code>, <code>get_next_line_utils</code></td>
  </tr>
  <tr>
    <td><strong>Valor devuelto</strong></td>
    <td>La línea leída; <code>NULL</code> en caso de fallo o fin de lectura.</td>
  </tr>
  <tr>
    <td><strong>Elementos autorizados</strong></td>
    <td><code>read()</code>, <code>malloc()</code>, <code>free()</code></td>
  </tr>
  <tr>
    <td><strong>Descripción</strong></td>
    <td>Función que devuelve la línea leída de un descriptor de archivo.</td>
  </tr>
</table>

### Prototipo
El prototipo de la función `get_next_line` es:

``` c++
char *get_next_line(int fd)
```
> fd: descriptor de archivo del que leer.

### Requisitos
- Llamar a tu función `get_next_line()` de manera repetida (por ejemplo, usando un bucle) te
permitirá leer el contenido del archivo hacia el que apunta el descriptor de archivo, línea a línea, hasta el final.
- Tu función deberá devolver la línea que se acaba de leer; si no hay nada más que leer o si ha ocurrido un error, deberá devolver `NULL`.
- Asegúrate de que tu función se comporta adecuadamente cuando lea de un archivo y cuando lea de `stdin`.
- Ten en cuenta que la línea devuelta debe terminar con el caracter `n`, excepto si se ha llegado al final del archivo y esté no termina con un caracter `n`.
- `get_next_line.h` deberá tener como mínimo el prototipo de la función `get_next_line()`.
- Añade todas las funciones de ayuda que necesites en el archivo `get_next_line_utils.c`.


## Bonus
- Desarrolla `get_next_line()` con una sola variable estática.
- Tu `get_next_line()` tiene que ser capaz de gestionar múltiples fd a la vez. Es decir,
si tienes tres fd disponibles para lectura (por ejemplo: 3, 4 y 5), debes poder utilizar `get_next_line()`
una vez sobre el fd 3, otra vez sobre el fd 4, y otra vez sobre el fd 5 de forma alterna. Y sí, no debe perder el hilo de lectura de cada uno de los fd.


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
[42 NORMA](https://github.com/zafraedu/42/blob/master/public/es_norm.pdf) información sobre las normas de código de 42. `PDF`


## LICENSE
Este trabajo se publica bajo los términos de [42 Unlicense](https://github.com/zafraedu/42/blob/master/LICENSE).
