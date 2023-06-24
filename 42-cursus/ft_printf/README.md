# ft_printf

Este proyecto va bastante al grano, tienes que programar la función printf.
Aprenderás qué significa esto y cómo implementar funciones variádicas. 
Una vez que valides el proyecto, podrás utilizar esta función en tus futuros proyectos. 

[![logro ft_printf](https://github.com/byaliego/42-project-badges/blob/main/badges/ft_printfe.png)](./src)

| Function | Description |
| -------- | ----------- |
| [ft_printf](./src/ft_printf.c) | Esta es la función principal, la cual ejecutará el código |
| [ft_printf_checker](./src/ft_printf_checker.c)     | verifica los datos de los siguientes caracteres posteriores a un `%` (flag o tipo de dato)   |
| [ft_converter_iduxo](./src/ft_converter_iduxo.c)   | convierte `va_arg` a uno de estos tipos de datos: `%i`, `%d`, `%u`, `%x`, `%o`               |
| [ft_converter_csp](./src/ft_converter_csp.c)       | convierte `va_arg` a uno de estos tipos de datos: `%c`, `%s`, `%p`                           |
| [ft_print_utilities.c](./src/ft_print_utilities.c) | contine las funciones que imprime los datos, y la función que resetea el bloque (estructura) |
