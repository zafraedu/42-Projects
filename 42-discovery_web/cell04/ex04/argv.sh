#!/bin/bash
if [ $# -eq 0 ]; then #verifica si se proporciona argumentos;
	echo No arguments supplied
else
	count=0 #assignar un contador para los args a '0';
	for arg in $@; do # $@ == todos los args
		if [ $count -lt 3 ]; then #si count es < 3;
			echo $arg #imprimir el argumento;
			((count++)) #incrementar el contador;
		else
			break #si no (sale del bucle for);
		fi
	done
fi
