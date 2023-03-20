Proceso sin_titulo
	Definir consumo, descuento, importe_a_pagar, impuesto Como Real
	Escribir "ingresa el valor de consumo"
	leer consumo
	Si consumo<=100 Entonces
		descuento<-consumo*0.1
	SiNo
		descuento<-consumo*0.2
	Fin Si
	impuesto<- (consumo-descuento)*0.19
	importe_a_pagar<- consumo-descuento+impuesto
	Escribir "valor descuento: ", descuento
	Escribir "valor de importe a pagar: ", importe_a_pagar
	Escribir "valor de impuesto: ", impuesto
FinProceso
