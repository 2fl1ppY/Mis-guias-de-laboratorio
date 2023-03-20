Proceso sin_titulo
	Definir hora,min,duraenmin Como Entero
	Definir costo Como Real
	Escribir "inserta los minutos de su llamada"
	leer min
	Escribir "inserta las horas de su llamada"
	Leer hora
	duraenmin<-(hora*60)+min
	Si (duraenmin<=3) Entonces
		costo<-0.5
	SiNo
		costo<-((duraenmin-3)*0.1)+0.5
	Fin Si
	Escribir "la duracion de su llamada en minutos fue de ",duraenmin, " y el costo es de ",costo
FinProceso
