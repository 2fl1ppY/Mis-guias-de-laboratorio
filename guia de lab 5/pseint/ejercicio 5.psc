Algoritmo PotenciaN
	Definir base, exponente Como Real
	Definir resultado Como Entero
	Escribir "Ingrese el número base: "
	Leer base
	
	Escribir "Ingrese el exponente: "
	Leer exponente
	
	si exponente = 0 entonces
		resultado = 1
	sino
		si exponente > 0 entonces
			resultado = 1
			para i = 1 hasta exponente hacer
				resultado = resultado * base
			finpara
		sino
			resultado = 1
			para i = 1 hasta abs(exponente) hacer
				resultado = resultado * base
			finpara
			resultado = 1/resultado
		finsi
	FinSi
	Escribir "El resultado es: ", resultado
FinAlgoritmo
