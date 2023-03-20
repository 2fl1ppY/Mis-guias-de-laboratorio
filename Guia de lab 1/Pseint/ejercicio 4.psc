Proceso sin_titulo
	Definir sueldoNet, SueldoBrut, Descuento, quincena, montoFinal Como Real
	Escribir "ingrese el sueldo bruto"
	Leer SueldoBrut
	
	Descuento=SueldoBrut*0.12
	sueldoNet=SueldoBrut-Descuento
	quincena=(sueldoNet*40)/100
	montoFinal=sueldoNet-quincena
	
	Escribir "el descuento es: ",Descuento
	Escribir "el sueldo neto es: ",sueldoNet
	Escribir "el monto a cobrar en la quincena es: ",quincena
	Escribir "el monto a cobrar a fin de mes es: ",montoFinal
	
	
FinProceso
