Si estás leyendo esto, significa que estás un poco perdido en tu primer proyecto de la piscina, jeje 😅.
No te preocupes, es normal. Primero vamos a empezar con una pequeña introducción general para aprender lo necesario para poder comenzar.
Si quieres saltar la introducción y empezar con el ***ex00***, [haz clic aquí]().

# Introducción

Antes de empezar, es esencial aprender a moverse por la terminal, crear directorios (carpetas), crear archivos y más...

## `pwd` (Print Working Directory) - ¿ Donde estamos ?

Con el comando `pwd` obtenemos la [***ruta***](https://sanchezcorbalan.es/rutas-relativas-vs-rutas-absolutas/) en la que nos encontramos

```bash
$ pwd
/home/usuario/Desktop
```

como podemos ver en el ejemplo arriba, nos encontramos en la ruta absoluta `/home/usuario/Desktop`

---


## `cd` (Change Directory) - Moverse por la terminal

Para entrar en una carpeta:

```bash
$ cd <nombre_del_directorio>
```

Ejemplo:

```bash
$ cd proyecto1
```

Ahora estamos dentro de la carpeta proyecto1.

### Subir un nivel con `cd ..`

Si queremos regresar al directorio `padre`:

```bash
$ cd ..
```

Por ejemplo, si estamos en /home/usuario/Desktop/proyecto1 y ejecutamos cd .., volvemos a /home/usuario/Desktop.

---


## `mkdir` (Make Directory) - Crear Carpeta

Para crear una carpeta nueva, usamos `mkdir`

```bash
$ mkdir <nombre_de_la_carpeta>
```

Ejemplo:
```bash
$ mkdir proyecto1
```

Esto creará una carpeta llamada `proyecto1` dentro de la ruta en la que te encuentres.

---


## `touch` - Crear archivos

Para crear un archivo vacío:

```bash
$ touch <nombre_del_archivo.ext>
```

Ejemplo:

```bash
$ touch main.c
```

También podemos crear varios archivos a la vez:

```bash
$ touch archivo1.txt archivo2.txt archivo3.txt
```

---

## `rm` - Eliminar archivos y carpetas

El comando `rm` se utiliza para eliminar archivos y directorios desde la terminal.

> [!CAUTION] Lo que elimines con `rm` no va a la papelera, se borra de forma permanente.

### Sintaxis básica

```bash
$ rm <nombre_del_archivo>
```

Ejemplo:

```bash
$ rm archivo.txt
```

Esto elimina el archivo `archivo.txt` en la carpeta actual.

### Flags importantes de `rm`

Los **flags** son opciones que modifican el comportamiento del comando:

- `-r` o `--recursive`: Permite eliminar **carpetas y todo su contenido** de manera recursiva.
- `-f` o `--force`: Fuerza la eliminación s**in preguntar confirmación**.

Combinados:

```bash
$ rm -rf <nombre_de_la_carpeta>
```

Ejemplo:

```bash
$ rm -rf proyecto1
```

Esto elimina la carpeta `proyecto1` y **todo lo que contiene**, sin pedir confirmación.