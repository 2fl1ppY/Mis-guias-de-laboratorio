Algoritmo sin_titulo
	Definir  billetes_de_100, billetes_de_50, billetes_de_20, billetes_de_10, monedas_de_1 Como Real
	Definir dinero, resto Como Real
	Escribir "ingrese la cantidad de dinero"
	leer dinero
	
	billetes_de_100=trunc(dinero/100)
	resto=trunc(dinero%100)
	billetes_de_50=trunc(resto/50)		
	resto=trunc(resto%50)
	billetes_de_20=trunc(resto/20)
	resto=trunc(resto%20)
	billetes_de_10=trunc(resto/10)
	resto=resto%10
	monedas_de_1=resto
	
	Mostrar "Billetes de 100: ", billetes_de_100 
	Mostrar "Billetes de 50: ", billetes_de_50
	Mostrar "Billetes de 10: ", billetes_de_10
	Mostrar "Monedas de 1 sol: ",monedas_de_1
	
FinAlgoritmo
