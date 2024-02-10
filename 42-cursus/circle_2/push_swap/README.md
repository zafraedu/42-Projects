![header push_swap](./assets/header_push_swap.png)

<div align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/evaluated-12%20%2F%2009%20%2F%202023-success?color=%2300599C&style=flat" />
	<img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white" />
	<img src='https://img.shields.io/badge/Málaga-00599C?style=flat&logo=42&logoColor=white'/>
</div>

---

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">Usage</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norme">Norminette</a> •
	<a href="#license">License</a>
</p>

## About
Este proyecto te hará ordenar datos en un *stack*, con un conjunto limitado de
*instrucciones*, y utilizando el menor número de instrucciones. Para tener éxito, deberás
trastear con algunos de los diversos algoritmos y elegir, entre todos, el más apropiado
para un ordenamiento óptimo.

Push_swap es un proyecto de algoritmia simple y muy efectivo: tienes que ordenar
datos. Tienes a tu disposición un conjunto de valores int, dos stacks y un conjunto de
instrucciones para manipular ambos.

¿Que cuál es el objetivo? Simple: escribirás un programa en C al que llamarás push_swap.
El programa calculará y mostrará en la salida estándar una lista de instrucciones escritas
en lenguaje push_swap. Deberás buscar el número mínimo de instrucciones para ordenar
el conjunto de enteros recibido como argumento.

¿A que es fácil? Bueno, eso ya lo veremos...

[Click aquí](./assets/es.subject.pdf) para ver el `PDF` del proyecto.

## HOW TO USE

### Compile
Copia y pega este codigo para descargar y copilar el proyecto.
```bash
git clone https://github.com/zafraedu/42.git && cd 42/42-cursus/circle_2/push_swap && make
```
### Makefile rules
- `make` - Compila los archivos ***src/push_swap*** y genera el ejecutable **push_swap**;
- `make bonus` - Compila los archivos ***src/checker*** y genera el ejecutable **checker**;
- `make clean` - Eliminas todos los objetos (*.o) generados al compilar;
- `make fclean` - Elimina todos los objetos más el ejecutable;
- `make re` - usa `make fclean` + `make`;

### Usage
Al ejecutar el programa ponemos varios numeros aleatorios como parametros, por ejemplo:
```c
./push_swap 8 6 4 7 1
```

También podemos ejecutarlo con varios numeros entre *comillas/dobles* como segundo parametro
```c
./push_swap "8 6 4 7 1"
```
#### Bonus Usage
Para el bonus primero tenemos que copilar el ejecutable con make en la raiz del proyecto checker:
```bash
make bonus
```
Ahora guardamos los numeros aleatorios en un variable y ejecutamos el push_swap con el checker:
```bash
ARG="0 34 43 89  3124 -543 -3"; ./push_swap $ARG | ./checker $ARG
```
si todo sale bien, nos debería de ejecutar `push_swap` y salir `OK` por la terminal si se ordena correctamente el programa o `KO` si no es así.

## Mandatory
<table>
  <tr>
    <th>Nombre del programa</th>
    <td><i>push_swap</i></td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>*.h</code>, <code>*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><i>NAME</i>, <i>all</i>, <i>clean</i>, <i>fclean</i>, <i>re</i>, <i>bonus</i></td>
  </tr>
  <tr>
    <th>Elementos autorizados</th>
    <td><code>write()</code>, <code>read()</code>, <code>malloc()</code>, <code>free()</code>, <code>exit()</code></td>
  </tr>
  <tr>
    <th>¿Libft permitido?</th>
    <td>Sí</td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>ordenar los números del stack a en orden ascendente.</td>
  </tr>
</table>

### Operations
para ordenar los numeros solo podremos usar las siguientes operaciones:
<table>
	<tr>
		<th>sa</th>
		<td>intercambia los dos primeros elementos encima del stack a. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>sb</th>
		<td>intercambia los dos primeros elementos encima del stack b. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>ss</th>
		<td><code>sa</code> y <code>sb</code> a la vez.</td>
	</tr>
	<tr>
		<th>pa</th>
		<td>toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.</td>
	</tr>
	<tr>
		<th>pb</th>
		<td> push b - toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.</td>
	</tr>
	<tr>
		<th>ra</th>
		<td> desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rb</th>
		<td> desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rr</th>
		<td><code>ra</code> y <code>rb</code> a la vez.</td>
	</tr>
	<tr>
		<th>rra</th>
		<td>desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.</td>
	</tr>
	<tr>
		<th>rrb</th>
		<td> desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero.</td>
	</tr>
	<tr>
		<th>rrr</th>
		<td><code>rra</code> y <code>rrb</code> a la vez.</td>
	</tr>
</table>

### Rules
- Debes escribir un programa llamado push_swap que recibirá como argumento el stack a con el formato de una lista de enteros. El primer argumento debe ser el que esté encima del stack (cuidado con el orden).
- El programa debe mostrar la lista de instrucciones (más corta posible) para ordenar el stack a, de menor a mayor donde el menor se sitúe en la cima del stack.
- Las instrucciones deben separarse utilizando un “\n” y nada más.
- El objetivo es ordenar el stack con el mínimo número de operaciones posible. Durante la evaluación compararemos el número de instrucciones obtenido por tu programa con un rango de instrucciones máximo.
- Tu programa no recibirá puntos tanto si tu programa muestra una lista demasiado larga como si el resultado no es correcto.
- Si no se especifican parámetros, el programa no deberá mostrar nada y deberá devolver el control al usuario.
- En caso de error, deberás mostrar Error seguido de un “\n” en la salida de errores estándar. Algunos de los posibles errores son: argumentos que no son enteros,argumentos superiores a un int, y/o encontrar números duplicados.

## Bonus
Tus bonus serán evaluados exclusivamente si la parte obligatoria es EXCELENTE.
Esto quiere decir, evidentemente, que debes completar la parte obligatoria, de principio
a fin, y que tu gestión de errores debe ser impecable aunque el programa se utilice
incorrectamente. De no ser así, esta parte será IGNORADA.
¿Te animas a hacerte tu propio checker? ¡Suena interesante!

### Rules
- Escribe un programa llamado checker, que tomará como argumento el stack a formateado como una lista de enteros. El primer argumento debe estar encima del stack (cuidado con el orden). Si no se da argumento, checker termina y no muestra nada.
- Durante la ejecución de checker se esperará y leerá una lista de instrucciones, separadas utilizando ’\n’. Cuando todas las instrucciones se hayan leído, checker las ejecutará utilizando el stack recibido como argumento.
- Tras ejecutar todas las instrucciones, el stack a deberá estar ordenado y el stack b deberá estar vacío. Si es así, checker imprimirá “OK” seguido de un ’\n’ en el stdout. De no ser así, mostrará “KO” seguido de un ’\n’ en el stdout.
- En caso de error, deberás mostrar Error seguido de un ’\n’ en la stderr. Los errores son:
  - Algunos o todos los argumentos no son enteros.
  - Algunos o todos los argumentos son más grandes que un int.
  - Hay uno o varios números duplicados.
  - Una instrucción no existe y/o no está bien formateada.

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
