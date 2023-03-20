Algoritmo sin_titulo
	Definir dias, mes, anio, totaldias Como Entero
	Definir diasMes Como Entero
	Escribir "ingrese el dia"
	Leer dias
	Escribir "ingrese el mes"
	Leer mes	
	Escribir "ingrese le anio"
	Leer anio
	
	segun mes Hacer
		1:
			diasMes=0
		2:
			diasMes=31
		3:
			diasMes=31+28
		4:
			diasMes=31+28+31
		5:
			diasMes=31+28+31+30
		6:
			diasMes=31+28+31+30+31
		7:
			diasMes=31+28+31+30+31+30
		8:
			diasMes=31+28+31+30+31+30+31
		9:
			diasMes=31+28+31+30+31+30+31+31
		10:
			diasMes=31+28+31+30+31+30+31+31+30
		11:
			diasMes=31+28+31+30+31+30+31+31+30+31
		12:
			diasMes=31+28+31+30+31+30+31+31+30+31+30
	FinSegun
	
	totaldias=diasMes+dias
	
	Escribir "es el dia: ",totaldias " del anio: ",anio
FinAlgoritmo
