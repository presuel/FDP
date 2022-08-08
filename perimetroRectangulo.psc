Algoritmo perimetroRectangulo
	Escribir "Calcular el perimetro de un rectangulo"
	escribir "Lado A: "
	leer ladoA
	Si ladoA > 0 Entonces
		// El lado SI es para cuando es TRUE la condición*
		escribir "Lado B: "
		leer ladoB
		si ladoB > 0 Entonces
			perimetro= 2*ladoA + 2*ladoB
			Escribir "Perimetro= ", perimetro
		SiNo
			escribir "Error en lado B"
		FinSi		
	SiNo
		escribir "Error en lado A"
	Fin Si	
FinAlgoritmo
