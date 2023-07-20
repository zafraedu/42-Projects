![header pipex](./public/header_pipex.png)

<div align="center">
	<img src="https://img.shields.io/badge/status-in process-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/score-...%20%2F%20100-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/evaluated-DD%20%2F%20MM%20%2F%20AAAA-success?color=%2300599C&style=flat" />
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
	<a href="#license">License</a> •
	<a href="https://github.com/zafraedu/42/wiki/pipex">Wiki</a>
</p>

## About
Pipex es un proyecto individual de 42 diseñado para introducir los conceptos de procesos paralelos, incluido el uso de `fork()`, `pipe()` y `execve()`.
Implica recrear la mayor parte de la funcionalidad de la canalización del operador de shell `|` (pipe),
incluida la gestión de canalización de señales y la redirección de E/S.
Además, presenta el concepto de here_doc y cómo leer la entrada de STDIN *(bonus part)*.

[Click aquí](./public/es_subject.pdf) para ver el `PDF` del proyecto.


## Usage
### Compilation
Clonar el repositorio:
```bash
git clone git@github.com:zafraedu/42.git
```
> Este no es el repositorio de pipex y sí de todos los proyectos de 42

Entrar en el repositorio del proyecto y ejecurar `make`:
```bash
cd 42/42-cursus/pipex
make
```

### Makefile Rules

- `make` - Compila los archivos ***src*** y genera el ejecutable **pipex**;
- `make bonus` - Compila los archivos ***bonus*** y genera el ejecutable **pipex_bonus**
- `make clean` - Eliminas todos los objetos (*.o) generados al compilar;
- `make fclean` - Elimina todos los objetos más el *libftprintf.a*;
- `make re` - usa `make fclean` + `make`;
- `make rebonus` - usa `make fclean` + `make bonus`;

### Ejemplo de uso
El programa se ejecuta de manera muy similar a la implementación de shell, sin embargo, no usa la misma sintaxis.
Pipex se puede ejecutar con la siguiente sintaxis (el comando y los argumentos deben estar entre comillas), así se vería ejecutando desde la terminal:

#### Pipex sin bonus:
```c
// Shell
$> < infile grep a | wc -l > outfile

// Nuestro programa pipex
$> ./pipex infile "grep a" "wc -l" outfile
```

> Con este comando nos debería de imprimir en *outfile* la cantidad de lineas (*wc -l*)
> que coincide con *"a"* (grep a) contenidas dentro del archivo *infile*,

#### Pipex con Bonus:
```c
// Shell
$> << STOP cat | grep a | wc -l >> outfile

// Nuestro programa pipex_bonus
$> ./pipex_bonus here_doc STOP "cat" "grep a" "wc -l" outfile
```
>-  Ahora podemos introducir mas de dos comandos
>-  `here_doc` nos permitirá introducir caracteres
>- `STOP` es el limitador (podemos introducir lo que queramos)

Tendremos que introducir datos que leerá el programa:
```c
> este es
> un archivo
> de prueba
> STOP
$>
```
> Escribimos lo que queramos, y paramos la ejecución con solo introducir
> el limitador que especificamos en el comando (en mi caso `STOP`);


Vemos el contenido de outfile con `cat`:
```bash
$> cat outfile
2
```
> Nos saldrá 2 porque imprime la cantidad de lineas que encontro la letra "*a*".


## Mandatory

<table>
  <tr>
    <th>Nombre del programa</th>
    <td><i>pipex</i></td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>*.h</code>, <code>*.c</code></td>
  </tr>
  <tr>
    <td>Makefile</td>
    <td>NAME, all, clean, fclean, re</td>
  </tr>
  <tr>
    <th>Funciones autorizadas</th>
    <td>
      <ul>
        <li>
          <code>open</code>, <code>close</code>, <code>read</code>, <code>write</code>, <code>malloc</code>, 
          <code>free</code>, <code>perror</code>, <code>strerror</code>, <code>access</code>, <code>dup</code>, 
          <code>dup2</code>, <code>execve</code>, <code>exit</code>, <code>fork</code>, <code>pipe</code>, 
          <code>unlink</code>, <code>wait</code>, <code>waitpid</code>
        </li>
        <li><code>ft_printf</code> and any equivalent YOU coded</li>
      </ul>
    </td>
  </tr>
  <tr>
    <th>¿Libft permitido?</th>
    <td>Sí</td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>Este proyecto va sobre el manejo de pipes</td>
  </tr>
</table>

>Para saber lo que hace cada una de las nuevas funciones puedes entrar a la [Wiki](https://github.com/zafraedu/42/wiki/pipex) del repositorio.

### Estructura del comando
```bash
$> ./pipex archivo1 comando1 comando2 archivo2
```
- `./pipex` -> El ejecutable (numbre del programa);
- `archivo1` -> Es el archivo de entrada (donde buscará el contenido);
- `comando1` -> Es el primer comando que pasara al segundo;
- `comando2` -> Es el conjunto del primer comando con este (para ejecutar la junción de ambos);
- `archivo2` -> Es donde se va a guardar el resultado del la junción de los comandos 1 y 2;


## Bonus

- Gestionar múltiples pipes:
```bash
$> ./pipex_bonus archivo1 comando1 comando2 comando3 ... archivo2
```
- Aceptar `<<` y `>>` cuando el primer parámetro es **here_doc**:
```bash
$> ./pipex_bonus here_doc LIMITADOR comando1 comando2 comando3 ... archivo2
```
- `here_doc` -> Es el argumento que pasamos para cambiar la entrada por defecto (infile) por valores introducidos por nosotros;
- `LIMITADOR` -> Es una string que introducimos para parar la ejecución de escritura del *here_doc*;

## Norme
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


## License
Este trabajo se publica bajo los términos de [42 Unlicense](https://github.com/zafraedu/42/blob/master/public/LICENSE).



