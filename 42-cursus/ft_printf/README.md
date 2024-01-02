![header ft_printf](./public/header_ft_printf.png)

<div align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/evaluated-05%20%2F%2006%20%2F%202023-success?color=%2300599C&style=flat" />
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
Como parte del plan de estudios de 42, debemos completar el proyecto ft_printf,
que consiste en recrear la conocida función de biblioteca de C, `printf()`.
En este proyecto aprenderemos a cómo implementar funciones variadicas,
También brinda una valiosad oportunidad de aprendizaje en estructuras y argumentos variados,
particularmente si tenemos la intención de incorporar banderas adicionales en nuestra implementación de printf (parte bonus).
Una vez que valides el proyecto, podrás utilizar esta función en tus futuros proyectos.

[Click aquí](./public/es_subject.pdf) para ver el `PDF` del proyecto.

> **Warning**  
> Este proyecto ha sido implementado directamente sobre el proyecto Libft (submódulo).  
> Aquí, se está usando directamente la librería `libft.a` para compilar el proyecto.


## Usage
### Compilation
Clonar el repositorio
```bash
git clone git@github.com:zafraedu/42.git
```
> Este no es el repositorio de ft_printf y sí de todos los proyectos de 42

Entrar en el repositorio del proyecto y ejecurar `make`
```bash
cd 42/42-cursus/ft_printf
make
```

Para usar en tu código, incluye el encabezado
```c
#include "ruta/ft_printf.h"
```

### Ejemplo de uso
Para el ejemplo creamos un archivo `main.c`.
```c
// Include the header
#include "./inc/ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!\n");
      return (0);
}
```

Compilamos `main.c` con la libreria generado con make anteriormente y ejecutamos el programa generado:
```bash
gcc main.c libftprintf.a && ./a.out
```

En la salida del programa debería mostrarse algo asíÑ
```
Testing ft_printf!
```

### Makefile Rules

- `make` - Compila los archivos ***mandatory*** de libft y ft_printf y genera *libftprintf.a*;
- `make clean` - Eliminas todos los objetos (*.o) generados al compilar;
- `make fclean` - Elimina todos los objetos más el *libftprintf.a*;
- `make re` - usa `make fclean` + `make`;


## Mandatory

<table>
  <tr>
    <th>Nombre del programa</th>
    <td><i>libftprintf.a</i></td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>*.h</code>, <code>*/*.h</code>, <code>*.c</code>, <code>*/*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><i>NAME</i>, <i>all</i>, <i>clean</i>, <i>fclean</i>, <i>re</i></td>
  </tr>
  <tr>
    <th>Elementos autorizados</th>
    <td><code>write()</code>, <code>malloc()</code>, <code>free()</code>, <code>va_start</code>, <code>va_arg</code>, <code>va_copy</code>, <code>va_ends</code></td>
  </tr>
  <tr>
    <th>¿Libft permitido?</th>
    <td>Sí</td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>Escribe una librería que contenga la función <code>ft_printf()</code> que reproduzca la función <code>printf()</code> original.</td>
  </tr>
</table>

### Prototipo 

El prototipo de `ft_printf()` es:

```c
int ft_printf(char const *, ...);
```
### Requisitos

- No implementes la gestión del buffer del `printf()` original.
- Deberás implementar las siguientes conversiones: `cspdiuxX%`.
- Tu función se comparará con el `printf()` original.
- Tienes que usar el comando ar para crear tu librería (libtool está prohibido).
- Tu archivo `libftprintf.a` deberá ser creado en la raiz de tu repositorio.

Tienes que implementar las siguientes conversiones:

<table>
  <tr>
    <th>Conversión</th>
    <th>Acción</th>
  </tr>
  <tr>
    <td><code>%c</code></td>
    <td>Imprime un solo carácter.</td>
  </tr>
  <tr>
    <td><code>%s</code></td>
    <td>Imprime un string (como se define por defecto en C).</td>
  </tr>
  <tr>
    <td><code>%p</code></td>
    <td>Imprime un puntero <code>void *</code> en formato hexadecimal.</td>
  </tr>
  <tr>
    <td><code>%d</code></td>
    <td>Imprime un número decimal (base 10).</td>
  </tr>
  <tr>
    <td><code>%i</code></td>
    <td>Imprime un número entero (base 10).</td>
  </tr>
  <tr>
    <td><code>%u</code></td>
    <td>Imprime un número decimal (base 10) sin signo.</td>
  </tr>
  <tr>
    <td><code>%x</code></td>
    <td>Imprime un número hexadecimal (base 16) en minúsculas.</td>
  </tr>
  <tr>
    <td><code>%X</code></td>
    <td>Imprime un número hexadecimal (base 16) en mayúsculas.</td>
  </tr>
  <tr>
    <td><code>%%</code></td>
    <td>Imprime el símbolo del porcentaje (es decir, <code>%</code>).</td>
  </tr>
</table>


## Bonus

No es necesario hacer todos los bonus.

- Gestiona cualquier combinación de los siguientes flags: `-`, `0` y `.` y el ancho mínimo (*field minimum width*) bajo todas las conversiones posibles.
- Gestiona todos los siguientes flags: `#`, ` `(space) y ` +`.

> **Note**  
> Piensa en la implementación de las características extras desde el principio.  
> De esta forma, evitarás los peligros de un enfoque ingenuo.


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
