Algoritmo sin_titulo
	Definir a,b Como Entero
	Definir resultado Como Real
	Escribir "digite los 2 valores enteros"
	Leer a,b
	si a^2-b^2<0 Entonces
		resultado=2*a+b
	SiNo
		si a^2-b^2=0 Entonces
			resultado=a^2-2*b
		SiNo
			si a^2-b^2>0 Entonces
				resultado=a+b
			FinSi
		FinSi
	FinSi
	Escribir "el valor de la funcion f(x) es de: ",resultado
	
	
FinAlgoritmo
