
/*
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 *
 *      Jorge Gómez <jorge@sindormir.net>
 *      Sindormir.net Formación
 *      https://sindormir.net
 *
 *      kwendenarmo <kwendenarmo@akornsys-rdi.net>
 */

#ifndef _ARDUINOFACIL_H
#define _ARDUINOFACIL_H

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif


/* Módulos a incluir */
#define AF_CORE
#define AF_CORE_EXT
#define AF_DISTANCE

/* Inclusiones de librerías*/
// -   <DistanceGP2Y0A21YK> https://github.com/jeroendoggen/Arduino-distance-sensor-library
//     AF_DISTANCE
//     #include <DistanceGP2Y0A21YK.h>


/* Remapeos de constantes */
#ifdef AF_CORE
    #define SALIDA OUTPUT
    #define ENTRADA INPUT
    #define ENTRADA_SUBIDA INPUT_PULLUP
    #define LED_INCORPORADO LED_BUILTIN
    #define CIERTO true
    #define FALSO false
#endif


/* Comparaciones */
#ifdef AF_CORE
    #define ACTIVA ==HIGH
    #define INACTIVA ==LOW
    #define esIgual ==
    #define noEsIgual !=
    #define esMayor >
    #define esMenor <
    #define esMayorOIgual >=
    #define esMenorOIgual <=
#endif


/* Operadores binarios */
#ifdef AF_CORE
    #define y )&&(
    #define o )||(
#endif


/* Macros nulas */
#ifdef AF_CORE
    #define esta 
    #define hay 
    #define a 
    #define que 
#endif


/* Remapeos de funciones de Arduino */
//Funciones I/O
#ifdef AF_CORE
    #define estableceComoSalida(X) pinMode(X, OUTPUT);
    #define estableceComoEntrada(X) pinMode(X, INPUT);
    #define estableceComoEntradaSubida(X) pinMode(X, INPUT_PULLUP);
    #define enciende(X) digitalWrite(X, HIGH);
    #define apaga(X) digitalWrite(X, LOW);
    #define entrada(X) digitalRead(X)
    #define iniciaInterrupcionSubida(X) attachInterrupt(X-2,isroutine,RISING);
    #define iniciaInterrupcionBajada(X) attachInterrupt(X-2,isroutine,FALLING);
#endif

//Funciones analógicas
#ifdef AF_CORE
    #define entradaAnalogica(X) analogRead(X)
    #define enciendeConValor(X,Y) analogWrite(X,map(Y,0,100,0,255));
#endif

//Funciiones de tiempo
#ifdef AF_CORE
    #define espera(X) delay(X*1000);
    #define cronometro millis()
#endif

//Funciones de música
#ifdef AF_CORE_EXT
    #define reproduceTono(X,Y) tone(X,Y);
    #define silenciaTono(X) noTone(X);
#endif

//Funciones de aleatoridad
#ifdef AF_CORE_EXT
    #define generaSemilla(X) randomSeed(X);
    #define aleatorio(X) random(X)
#endif

//Funciones de puerto serie
#ifdef AF_CORE_EXT
    #define iniciaPuerto Serial.begin(9600);
    #define datoDisponible Serial.available()>0
    #define enviaDato(X) Serial.write(X);
    #define enviaTexto(X) Serial.println(X);
    #define dato Serial.read()
#endif

//Funciones de sensores de distancia
#ifdef AF_DISTANCE
    #define declaraDistancia DistanceGP2Y0A21YK Dist;
    #define iniciaDistancia(X) Dist.begin(X);
    #define distancia Dist.getDistanceCentimeter()
#endif


/* Remapeos de C */
//Estructura
#ifdef AF_CORE
    #define comienzoPreparacion void setup(){
    #define finPreparacion }
    #define comienzoReceta void loop(){
    #define finReceta }
    #define declaraInterrupcion void isroutine();
    #define comienzoInterrupcion void isroutine(){
    #define finInterrupcion }
    #define creaVariable(X) long X=0;
    #define guardaValor(X,Y) Y=X;
    #define incrementaValor(X,Y) Y+=X;
    #define desplazaValorAIzquierdas(X,Y) Y<<X;
    #define desplazaValorADerechas(X,Y) Y>>X;
#endif

//Estructura de control
#ifdef AF_CORE
    #define si if(
    #define entonces ){
    #define finSi }   
    #define siNo }else{
    #define siSiNo } else if (  
    #define repetir(X,Y) for(int X=0;X<(Y);X++){
    #define finRepetir }
    #define porSiempre do{
    #define finPorSiempre }while(1);
    #define esperaMientrasQue while(
    #define finEsperaMientrasQue );
    #define repetirMientrasQue while(
    #define finRepetirMientrasQue }
#endif

#endif //_ARDUINOFACIL
