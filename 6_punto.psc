Algoritmo CalcularF
    Definir x, y1 como Entero
    Definir sigma, lambda, alfa, f como Real
	
    x = 12
    sigma = 2.1836
    y1 = 3
    lambda = 1.11695
    alfa = 328.67
	
    f = 3 * (x + sigma * y1 / (x * x - y1 * y1)) - lambda * (alfa - 13.7)
	
    Escribir "El valor de f es: ", f
	
FinAlgoritmo