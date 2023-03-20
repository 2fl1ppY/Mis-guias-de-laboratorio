Algoritmo sin_titulo
	Definir ventas, comision Como Real
	Escribir "ingrese el numero de ventas"
	Leer ventas
	
	si ventas>=0 y ventas<=200 Entonces
		comision=0
	SiNo
		si ventas>=200 y ventas<=1000 Entonces
			comision=ventas*0.10
		SiNo
			si ventas>=1000 y ventas<=2000 Entonces
				comision=ventas*0.15
			SiNo
				si ventas>=2000 y ventas<=3000 Entonces
					comision=ventas*0.20
				SiNo
					si ventas>=3000 y ventas<=4000 Entonces
						comision=ventas*0.25
					SiNo
						comision=ventas*0.30
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir "la comision total es de: ",comision " nuevos soles"
FinAlgoritmo
