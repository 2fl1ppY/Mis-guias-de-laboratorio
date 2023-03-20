Algoritmo sin_titulo
	Definir dia,mes,anio Como Real
	Escribir "digite el anio"
	Leer anio
	Escribir "dogite el mes"
	Leer mes	
	
	Segun mes Hacer
		1,3,5,7,8,10,12:
			Escribir "el mes tiene 31 dias"
			
		2:
			si (anio % 4==0) y (anio % 100<>0) o (anio%400==0) Entonces
				Escribir "el mes tiene 29 dias"
			SiNo
				Escribir "el mes tiene 28 dias"
			FinSi
			
		4,6,9,11:
			Escribir "el mes tiene 30 dias"
	FinSegun
	
FinAlgoritmo
