Proceso sin_titulo
	Definir saldoant, montotran, saldoactual como real
	Definir tipomovil Como Caracter
	Escribir "ingrese su saldo anterior"
	Leer saldoant
	Escribir "ingrese el tipo de movimiento retiro (R) o deposito (D)"
	leer tipomovil
	Escribir "ingrese el monto de transaccion"
	Leer montotran
	Si tipomovil="R" Entonces
		saldoactual=saldoant-montotran
	Fin Si
	Si tipomovil="r" Entonces
		saldoactual=saldoant-montotran
	Fin Si
	Si tipomovil="D" Entonces
		saldoactual=saldoant+montotran
	Fin Si
	Si tipomovil="d" Entonces
		saldoactual=saldoant+montotran
	Fin Si
	Si tipomovil="" Entonces
		saldoactual<-0
		Escribir "no existe este movimiento"
	Fin Si
	Escribir "su saldo actual es de: ", saldoactual
FinProceso
