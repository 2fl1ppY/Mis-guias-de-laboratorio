Algoritmo sin_titulo
	Definir T,M,F,T1,M1,F1,NotaFin Como Real
	Escribir "digite las 3 notas"
	Leer T,M,F
	
	T1=T*0.50
	M1=M*0.20
	F1=F*0.30
	NotaFin=T1+M1+F1
	si NotaFin>=0 y NotaFin<=5 Entonces
		escribir "el estudiante esta catalogado como pesimo"
	SiNo
		si  NotaFin>=6 y NotaFin<=10 Entonces
			escribir "el estudiante esta catalogado como malo"
		SiNo
			si NotaFin>=11 y NotaFin<=15 Entonces
				Escribir "el estudiante esta catalogado como regular"
			SiNo
				Escribir "el estudiante esta catalogado como bueno"
			FinSi
		FinSi
		
	FinSi
	
FinAlgoritmo
