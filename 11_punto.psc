Algoritmo Prestamo
    Definir prestamo1 como Real
    Definir interes como Real
    Definir plazoa�o como Entero
    Definir cuota como Real
    Definir total como Real
    Definir Amortizacion como Real
    Definir Intereses como Real
	
    Escribir "Ingrese el capital prestado:"
    Leer prestamo1
	
    Escribir "Ingrese el inter�s anual:"
    Leer interes
	
    Escribir "Ingrese el plazo en a�os:"
    Leer plazoa�o
	
    Definir ratio como Real
    ratio <- interes / 12
	
    Definir plazoMeses como Entero
    plazoMeses <- plazoa�o * 12
	
    cuota <- prestamo1 * ratio / (100 * (1 - (1 + ratio / 100)-plazoMeses))
	
    total <- cuota * plazoMeses
	
    Amortizacion <- prestamo1
    Intereses <- Pagado - Amortizacion
	
    Escribir "Cuota mensual a pagar:", cuota
    Escribir "Total pagado:", total
    Escribir "Cantidad de amortizaci�n:", Amortizacion
    Escribir "Cantidad de intereses:", Intereses
	
FinAlgoritmo