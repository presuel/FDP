Algoritmo perimetroRectangulo
	Escribir "Calcular el perimetro de un rectangulo"	
	// variable de control
	iteraciones= 0
	// Bucle
	Mientras iteraciones < 3 Hacer
		escribir "Lado A: "
		leer ladoA
		Si ladoA > 0 Entonces
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
		iteraciones= iteraciones + 1
	Fin Mientras
FinAlgoritmo
