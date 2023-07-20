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
Clonar el repositorio
```bash
git clone git@github.com:zafraedu/42.git
```
> Este no es el repositorio de pipex y sí de todos los proyectos de 42

Entrar en el repositorio del proyecto y ejecurar `make`
```bash
cd 42/42-cursus/pipex
make
```

## Ejemplo de uso


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
    <th>Argumentos</th>
    <td>archivo1 comando1 comando2 archivo2</td>
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
        <li>`ft_printf` and any equivalent YOU coded</li>
      </ul>
    </td>
  </tr>

</table>



