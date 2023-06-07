Algoritmo Prestamo
    Definir prestamo1 como Real
    Definir interes como Real
    Definir plazoaño como Entero
    Definir cuota como Real
    Definir total como Real
    Definir Amortizacion como Real
    Definir Intereses como Real
	
    Escribir "Ingrese el capital prestado:"
    Leer prestamo1
	
    Escribir "Ingrese el interés anual:"
    Leer interes
	
    Escribir "Ingrese el plazo en años:"
    Leer plazoaño
	
    Definir ratio como Real
    ratio <- interes / 12
	
    Definir plazoMeses como Entero
    plazoMeses <- plazoaño * 12
	
    cuota <- prestamo1 * ratio / (100 * (1 - (1 + ratio / 100)-plazoMeses))
	
    total <- cuota * plazoMeses
	
    Amortizacion <- prestamo1
    Intereses <- Pagado - Amortizacion
	
    Escribir "Cuota mensual a pagar:", cuota
    Escribir "Total pagado:", total
    Escribir "Cantidad de amortización:", Amortizacion
    Escribir "Cantidad de intereses:", Intereses
	
FinAlgoritmo