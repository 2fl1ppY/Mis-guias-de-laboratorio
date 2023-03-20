Algoritmo fracciones
	Definir n, contador Como Entero
	Definir numerador, denominador Como Real
	
	Escribir "Ingrese la cantidad de términos a generar:"
	Leer n
	
	numerador <- 2
	denominador <- 5
	
	Escribir numerador, "/", denominador
	
	contador <- 2
	
	Mientras contador <= n Hacer
		numerador <- numerador + 3
		denominador <- denominador + 4
		
		Escribir numerador, "/", denominador
		
		contador <- contador + 1
	FinMientras
	
FinAlgoritmo
