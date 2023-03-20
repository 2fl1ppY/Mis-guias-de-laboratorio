Proceso sin_titulo
	definir tama Como Entero
	escribir "ingrese el lado del cuadrado"
	leer lado
	area=lado*lado
	Escribir "el area del cuadrado es: ",area
	Si area<100 Entonces
		tamaño<-"cuadrado pequeño"
	SiNo
		tamaño<-"cuadrado grande"
	Fin si
	
	Escribir "es un", tamaño
FinProceso
