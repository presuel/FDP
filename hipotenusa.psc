Algoritmo Hipotenusa
	// AAPR - ago2022
	escribir "Calcular la hipotenusa de un triángulo rectángulo"
	// bucle
	Repetir
		escribir "Lado A:"
		leer ladoA
		si ladoA > 0 Entonces
			escribir "Lado B:"
			leer ladoB
			si ladoB > 0 Entonces
				ladoC= rc(  ladoA * ladoA + ladoB * ladoB   )
				escribir "Hipotenusa= ", ladoC
			SiNo
				escribir "Error en lado B"
			FinSi		
		SiNo
			escribir "Error en lado A"
		FinSi	
		escribir "Para finalizar oprime 0, para continuar 1"
		leer respuesta
	Hasta Que respuesta = 0
FinAlgoritmo
