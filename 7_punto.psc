Algoritmo CalcularNomina
	
    Definir Base, Destino, Academico como Real
    Definir horasExtra, Hijos, Dependientes como Entero
    Definir Bruto, porcentajeIRPF, retencionIRPF, Neto como Real
	
    Escribir "Ingrese su sueldo base: "
    Leer Base
    Escribir "Ingrese su complemento de destino: "
    Leer Destino
    Escribir "Ingrese su complemento de cargo academico: "
    Leer Academico
    Escribir "Ingrese sus horas extra realizadas: "
    Leer horasExtra
    Escribir "�Cu�ntos hijos tiene?: "
    Leer Hijos
    Escribir "�Cu�ntos de sus hijos son mayores dependientes?: "
    Leer Dependientes
	
    Bruto <- Base + Destino + Academico + (23 * horasExtra)
	
    porcentajeIRPF <- 24 - (2 * Hijos) - Dependientes
	
    retencionIRPF <- Bruto * (porcentajeIRPF / 100)
	
    Neto <- Bruto - retencionIRPF
	
    Escribir "C�lculo de la n�mina."
    Escribir "Sueldo base: ", Base, " $"
    Escribir "Complemento de destino: ", Destino, " $"
    Escribir "Complemento de cargo acad�mico: ", Academico, " $"
    Escribir "Horas extra realizadas: ", horasExtra
    Escribir "Hijos: ", Hijos
    Escribir "Mayores: ", Dependientes
    Escribir "Sueldo bruto: ", Bruto, " $"
    Escribir "Porcentaje de IRPF: ", porcentajeIRPF, "%"
    Escribir "Retenci�n por IRPF: ", retencionIRPF, " $"
    Escribir "Sueldo neto: ", Neto, " $"
	
FinAlgoritmo