Algoritmo ejercicio2
    Definir valor_inicial, valor_final, suma, cantidad Como Entero
    Escribir "Ingrese el valor inicial: "
    Leer valor_inicial
    Escribir "Ingrese el valor final: "
    Leer valor_final
	suma <- 0
    cantidad <- 0
	
    Para i <- valor_inicial hasta valor_final Hacer
        Si (i mod 3 = 0) y (i mod 5 = 0) Entonces
            suma <- suma + i
            cantidad <- cantidad + 1
        FinSi
    FinPara
	
    Escribir "La suma de los números divisibles por 3 y 5 es: ", suma
    Escribir "La cantidad de números divisibles por 3 y 5 es: ", cantidad
	
FinAlgoritmo
