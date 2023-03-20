Algoritmo sin_titulo
	Definir sueld, aumento, sueldFin Como Real
	Escribir "digite el sueldo del empleado"
	Leer sueld
	
	si sueld>=0 y sueld<=800 Entonces
		aumento=sueld*0.20
	SiNo
		si sueld>=801 y sueld<=1000 Entonces
			aumento=sueld*0.10
		SiNo
			si sueld>=1001 y sueld<=1500 Entonces
				aumento=sueld*0.05
			SiNo
				aumento=0
			FinSi
		FinSi
	FinSi
	
	sueldFin=sueld+aumento
	
	Escribir "el sueldo final del empledo con el aumento del: ",aumento, " es de: ",sueldFin, " nuevos soles"
	
FinAlgoritmo
