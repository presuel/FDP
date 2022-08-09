Algoritmo perimetroRectangulo
	Escribir "Calcular el perimetro de un rectangulo"		
	Dimension Matriz[3,3] // Filas, columnas
	i= 1
	Mientras i <= 3 Hacer
		escribir "Lado A: "
		leer ladoA
		Matriz[i,1]= ladoA
		Si ladoA > 0 Entonces
			escribir "Lado B: "
			leer ladoB
			Matriz[i,2]= ladoB
			si ladoB > 0 Entonces
				perimetro= 2*ladoA + 2*ladoB
				Matriz[i,3]= perimetro
				Escribir "Perimetro= ", perimetro
			SiNo
				escribir "Error en lado B"
				Matriz[i,3]= -1
			FinSi		
		SiNo
			escribir "Error en lado A"
			Matriz[i,3]= -1
		Fin Si	
		i= i+ 1
	Fin Mientras
	escribir "Ejercicios realizados"
	i= 1
	mientras i <= 3 Hacer
		escribir "Rectangulo ", Matriz[i,1], "x", Matriz[i,2], ", P= ", Matriz[i,3]
		i= i+1 // para romper el BUCLE INFINITO
	FinMientras
FinAlgoritmo
