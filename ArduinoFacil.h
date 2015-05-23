
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
#define AF_GP2Y0A21YK
#define AF_ACCELSTEPPER

/* Inclusiones de librerías*/
// -  <DistanceGP2Y0A21YK> https://github.com/jeroendoggen/Arduino-GP2Y0A21YK-library
#ifdef AF_GP2Y0A21YK_
    #include <../DistanceGP2Y0A21YK/DistanceGP2Y0A21YK_LUTs.h>
    #include <../DistanceGP2Y0A21YK/DistanceGP2Y0A21YK.h>
#endif
// - <AccelStepper> http://www.airspayce.com/mikem/arduino/AccelStepper/ 
#ifdef AF_ACCELSTEPPER
    #include <../AccelStepper/AccelStepper.h>
#endif


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
#endif

//Funciones analógicas
#ifdef AF_CORE
    #define entradaAnalogica(X) analogRead(X)
    #define enciendeConValor(X,Y) analogWrite(X,Y);
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
    #define enviaTexto(X) Serial.println(#X);
    #define dato Serial.read()
#endif

//Funciones de GP2Y0A21YK
#ifdef AF_GP2Y0A21YK
    #define declaraDistancia DistanceGP2Y0A21YK Dist;
    #define iniciaDistancia(X) Dist.begin(X);
    #define distancia Dist.getDistanceCentimeter()
#endif

//Funciones de AccelStepper
#ifdef AF_ACCELSTEPPER
    #define declaraMotorUno(A,B,C,D) AccelStepper stepperOne(8,A,C,B,D);
    #define iniciaMotorUno stepperOne.setMaxSpeed(1500);stepperOne.setAcceleration(100);
    #define avanzaMotorUno(X) if(stepperOne.distanceToGo()==0) stepperOne.move(X*4096);
    #define mueveMotorUno stepperOne.run();
    #define paraMotorUno stepperOne.stop();
    #define declaraMotorDos(A,B,C,D) AccelStepper stepperTwo(8,A,C,B,D);
    #define iniciaMotorDos stepperTwo.setMaxSpeed(1500);stepperTwo.setAcceleration(100);
    #define avanzaMotorDos(X) if(stepperTwo.distanceToGo()==0) stepperTwo.move(X*4096);
    #define mueveMotorDos stepperTwo.run();
    #define paraMotorDos stepperTwo.stop();
#endif


/* Remapeos de C */
//Estructura
#ifdef AF_CORE
    #define comienzoPreparacion void setup(){
    #define finPreparacion }
    #define comienzoReceta void loop(){
    #define finReceta }
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
#endif

#endif //_ARDUINOFACIL
