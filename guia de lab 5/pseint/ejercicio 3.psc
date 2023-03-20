Algoritmo MCM_For
		Definir a, b, mcm, mcd Como Entero
		
		Escribir "Ingrese el primer número:"
		Leer a
		
		Escribir "Ingrese el segundo número:"
		Leer b
		
		Para i <- 1 Hasta a Hacer
			Si a mod i = 0 y b mod i = 0 Entonces
				mcd <- i
			FinSi
		FinPara
	
		mcm <- (a * b) 
		
		Escribir "El MCM de ", a, " y ", b, " es: ", mcm
		escribir "EL MCD de " a, "y", b, "es:", mcd
FinAlgoritmo

