Algoritmo ejercicio4
    Definir N, i, sCuadrados, sCubos como Entero
	
    Escribir "Ingrese un numero :"
    Leer N
	
    suma_cuadrados = 0
    suma_cubos = 0
	
    Para i = 1 Hasta N Con Paso 1 Hacer
        sCuadrados = sCuadrados + i * i
        sCubos = sCubos + i * i * i
    FinPara
	
    Escribir "La suma de los cuadrados de los primeros ", N, " numeros naturales es: ", sCuadrados
    Escribir "La suma de los cubos de los primeros ", N, " numeros naturales es: ", sCubos
	
FinAlgoritmo
