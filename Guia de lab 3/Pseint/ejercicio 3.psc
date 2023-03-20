Algoritmo sin_titulo
	Definir a,b,c,d,e,max Como Entero
	Escribir "digite los 5 numeros enteros"
	Leer a,b,c,d,e
	
	si a>b y a>c y a>d y a>e Entonces
		max=a
	SiNo
		si b>a y b>c y b>d y b>e Entonces
			max=b
		SiNo
			si c>a y c>b y c>d y c>e Entonces
				max=c
			SiNo
				si d>a y d>c y d>b y d>e Entonces
					max=d
				SiNo
					si e>a y e>c y e>d y e>b Entonces
						max=e
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Escribir "el numero mayor es: ",max
FinAlgoritmo
