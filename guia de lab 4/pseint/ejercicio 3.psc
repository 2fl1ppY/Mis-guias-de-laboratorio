Algoritmo sin_titulo
	Definir dia,mes,anio Como Entero
	Escribir "ingrese el dia"
	Leer dia	
	Escribir "ingrese el mes"
	Leer mes	
	Escribir "ingrese el anio"
	Leer anio
	
	Segun mes Hacer
		1,3,5,7,8,10:
			si dia=31 Entonces
				Escribir "el dia siguiente a la fecha es: 1/",mes+1,"/",anio
			SiNo
				Escribir "el dia siguiente a la fecha es: ",dia+1,"/",mes,"/",anio
			FinSi
		4,6,9,11:
			si dia=30 Entonces
				Escribir "el dia siguiente a la fecha es: 1/",mes+1,"/",anio
			SiNo
				Escribir "el dia siguiente a la fecha es: ",dia+1,"/",mes,"/",anio
			FinSi
		12:
			si dia=31 Entonces
				Escribir "el dia siguiente a la fecha es: 1/01",anio+1
			SiNo
				Escribir "el dia siguiente a la fecha es: ",dia+1,"/",mes,"/",anio
			FinSi
		2:
			si dia=28 Entonces
				Escribir "el dia siguiente a la fecha es: 1/",mes+1,"/",anio
			SiNo
				Escribir "el dia siguiente a la fecha es: ",dia+1,"/",mes,"/",anio
			FinSi
	FinSegun

FinAlgoritmo
