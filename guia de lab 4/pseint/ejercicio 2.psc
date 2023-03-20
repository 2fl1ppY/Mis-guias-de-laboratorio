Algoritmo sin_titulo
	Definir calidad,producto, precio Como Entero
	Escribir "ingrese el numero del producto del 1 al 3"
	Leer producto
	Escribir "escoga la calidad del producto del 1 al 3"
	Leer calidad
	
	segun producto Hacer
		1:
			Segun calidad Hacer
				1:
					precio=5000
				2:
					precio=4500
				3:
					precio=4000
			FinSegun
			
		2:
			Segun calidad Hacer
				1:
					precio=4500
				2:
					precio=4000
				3:
					precio=3500
			FinSegun
			
		3:
			Segun calidad Hacer
				1:
					precio=4000
				2:
					precio=3500
				3:
					precio=3000
			FinSegun
			
	FinSegun
	
	Escribir "el precio del produto es de: ",precio
FinAlgoritmo
