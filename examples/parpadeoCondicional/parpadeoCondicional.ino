#include <ArduinoFacil.h>

comienzoPreparacion
    estableceComoSalida (13)
    estableceComoEntrada (2)
finPreparacion

comienzoReceta
    si entrada(2) esta ACTIVA entonces
        enciende(13)
        espera(0.1)
        apaga(13)
        espera(2)    
    finSi
finReceta
