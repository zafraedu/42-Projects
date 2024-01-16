![exam_rank_03](./assets/exam_rank_03_header.png)

<div align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%23A63F19&style=flat" />
	<img src="https://img.shields.io/badge/score-100%20%2F%20100-success?color=%23A63F19&style=flat" />
	<img src="https://img.shields.io/badge/evaluated-10%20%2F%2001%20%2F%202024-success?color=%23A63F19&style=flat" />
	<img src="https://img.shields.io/badge/C-A63F19?style=flat&logo=c&logoColor=white" />
	<img src='https://img.shields.io/badge/Málaga-A63F19?style=flat&logo=42&logoColor=white'/>
</div>

---

<p align="center">
	<a href="#details">Details</a> •
	<a href="#examshell">Exam Shell</a> •
	<a href="#simulator">Simulator</a>
</p>

## Details
- En el examen te puede tocar o **printf()** o **get_next_line()** aleatoriamente.
- Necesitas validar el ejercicio por completo para obtener 100.
- No hay Norminette en el examen.
- Hay 2 ejercicios en total, puedes ver el codigo de cada ejercicio en (nombre del ejercicio).c

## ExamShell

En el ***exam shell***, solo tiene los siguientes 3 comandos:
- `status` - comprobar la hora y otras cosas.
- `grademe` - comprobación del ejercicio push (moulinet).
- `finished` - cerrar examen y terminar examen.

Abra un nuevo iTerm o VSCode:
- Puedes encontrar la materia de tu examen en el directorio de `subject`.
- Dentro del repositorio `rendu`, debe crear una carpeta con el nombre del proyecto y comenzar a trabajar en esa carpeta.

### ExamShell Submission
Cuando esté listo para enviar su función/programa, vaya a `rendu` y haga `push` de la carpeta que creó haciendo lo siguiente:
1. git add <folder name/files in folder>.
2. git status (para comprobar si todo esta bien, este paso se puede omitir).
3. git commit -m "any commit message you like in these strings".
4. git push
5. Después de git push, escriba `grademe` en el ***ExamShell*** para que se evalúe su proyecto.

### Exam IDE
Debería poder usar tanto VSCode como Vim en el examen.
<p>
	<img src="https://skillicons.dev/icons?i=vim" />
</p>

## Simulator
#### Como instalar el examen

> **Note**
> Este simulador es un trabajo hecho por [jcluzet](https://github.com/JCluzet/).

Copia el siguiente código y pégalo en tu terminal.
```
bash -c "$(curl https://grademe.fr)"
```
Seleccionamos `42_EXAM simulator` pulsando la tecla `3` en el teclado.

[![img grademe 1](public/grademe_01.png)](https://grademe.fr/)

Abrimos una nueva terminal y accedemos al directorio `42_EXAM`, dentro habrá muchas carpetas pero solo nos iremos a fijar en dos,
- `subject` donde nos mostrará el enunciado y la información del ejercicio que tengamos que hacer.
- `rendu` aquí crearemos un directorio con el nombre del ejercicio, y dentro de este es donde haremos el ejercicio.
```bash
vim .../42_EXAM/rendu/ejercicio/ejercicio.c
```
