Algoritmo RadianesTriangulo
	
    Definir lado1, lado2 como Real
    Definir Grados como Real
    Definir Radianes como Real
    Definir area como Real
	
    Escribir "Digite el primer lado del tri�ngulo: "
    Leer lado1
	
    Escribir "Digite el segundo lado del tri�ngulo: "
    Leer lado2
	
    Escribir "Digite el �ngulo entre los lados del triangulo: "
    Leer angulo
	
    Radianes <- angulo * 3.14159 / 180
	
    area <- 0.5 * lado1 * lado2 * sen(Radianes)
	
    Escribir "El �rea del tri�ngulo despues de convertir el �ngulo en radianes es:", area
	
FinAlgoritmo
