Algoritmo ConvTiempo
	Escribir 'Digite el tiempo transcurrido en segundos: '
	Leer s
	
	h = s / 3600
    s_r = s % 3600
    min = s_r / 60
    s_r = s_r % 60
	
	Escribir "Tiempo equivalente: ", h, "h ", min, "m ", s_r, "s"
	
FinAlgoritmo