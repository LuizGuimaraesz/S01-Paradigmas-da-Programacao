INPUT "Digite a temperatura em Celsius: "; C

LET F = (C * 9 / 5) + 32
LET K = VAL(C) + VAL(273)

PRINT "Temperatura em Celsius: " + C
PRINT "Temperatura em Fahrenheit: " + F
PRINT "Temperatura em Kelvin: " + K
