Funcion C <- calcHipotenusa ( A, B )
	C= rc ( A*A + B*B )
Fin Funcion


Algoritmo Hipotenusa
	// AAPR - ago2022
	escribir "Calcular la hipotenusa de un tri�ngulo rect�ngulo"
	Escribir "Se puede repetir hasta 10 veces el proceso."
	Dimension Matriz[10,3]
	i= 1
	Repetir
		si i <= 10 Entonces
			escribir "Lado A:"
			leer ladoA
			Matriz[i,1]= ladoA
			si ladoA > 0 Entonces
				escribir "Lado B:"
				leer ladoB
				Matriz[i,2]= ladoB
				si ladoB > 0 Entonces					
					Matriz[i,3]= calcHipotenusa( Matriz[i,1], Matriz[i,2] )
				SiNo
					escribir "Error en lado B"
					Matriz[i,3]= -1
				FinSi		
			SiNo
				escribir "Error en lado A"
				Matriz[i,3]= -1
			FinSi
		SiNo
			// Cuando llegue a 11 no permitir� ninguna operaci�n m�s
			respuesta= 0
		FinSi
		i= i+1
		escribir "Para finalizar oprime 0, para continuar 1"
		leer respuesta
	Hasta Que respuesta = 0
	Escribir "Ejercicios realizados."
	ii= 1
	mientras ii<i Hacer
		si ( Matriz[ii,3] > -1) Entonces
			escribir "Triangulo ", Matriz[ii,1], "x", Matriz[ii,2], ", Hipotenusa= ", Matriz[ii,3]
		SiNo
			escribir "Datos incorrectos"
		FinSi
		
		ii= ii+1
	FinMientras	
FinAlgoritmo
