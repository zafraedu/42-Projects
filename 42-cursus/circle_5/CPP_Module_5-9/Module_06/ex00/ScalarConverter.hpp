#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits.h>
#include <cmath>
#include <string>
#include <sstream>
#include <stdlib.h>

enum e_dataType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSF,
	PSD,
	INVALID
};

class ScalarConverter
{
	//! quitar los comentarios a la hora de subir
	/* Al declarar el constructor privado evitamos que la clase pueda ser instanciada
	fuera de la clase. Esto es util con ciertos patrones de diseño, como el patron Singleton,
	donde solo quieres permitir una unica instancia de la clase.
	Ademas, tambien se utiliza para prevenir la creacion de objetos si la clase solo
	contiene metodos estaticos. El metodo estatico convert() se podrá usar sin instanciar la clase.*/
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	~ScalarConverter();

	ScalarConverter &operator=(const ScalarConverter &rhs);

public:
	static void convert(const std::string str);
};

#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

#endif
//! quitar los comentarios a la hora de subir
/*
		-> -inff y -inf: representan el "menos infinito". Se utliza cuando un numero es
		demasiado pequeño para ser representado en el sistema de punto flotante del pc.
		-> +inff y +inf: representan el "más infinito". Se utliza cuando un numero es
		demasiado grande para ser representado en el sistema de punto flotante del pc.
		-> nan: representa "Not a Number". Se utiliza para representar resultados de
		operaciones matematicas indefinidas, como la division por cero.
*/
