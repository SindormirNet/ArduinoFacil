
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


/* Inclusiones de librerías*/
//Compatible con las librerías:
// -  <>


/* Remapeos de constantes */
#define SALIDA OUTPUT
#define ENTRADA INPUT
#define ENTRADA_SUBIDA INPUT_PULLUP
#define LED_INCORPORADO LED_BUILTIN
#define ACTIVA ==HIGH
#define INACTIVA ==LOW
#define CIERTO true
#define FALSO false


/* Comparaciones */
#define esIgual ==
#define noEsIgual !=
#define esMayor >
#define esMenor <
#define esMayorOIgual >=
#define esMenorOIgual <=


/* Macros nulas */
#define esta 
#define hay 


/* Remapeos de funciones de Arduino */
//Funciones I/O
#define estableceComoSalida(X) pinMode(X, OUTPUT);
#define estableceComoEntrada(X) pinMode(X, INPUT);
#define estableceComoEntradaSubida(X) pinMode(X, INPUT_PULLUP);
#define enciende(X) digitalWrite(X, HIGH);
#define apaga(X) digitalWrite(X, LOW);
#define entrada(X) digitalRead(X)
//Funciones analógicas
#define entradaAnalogica(X) analogRead(X)
#define enciendeConValor(X,Y) analogWrite(X,Y);
//Funciiones de tiempo
#define espera(X) delay(X*1000);
#define cronometro millis()
//Funciones de música
#define tono(X,Y) tone(X,Y);
#define finTono(X) noTone(X);
//Funciones de aleatoridad
#define generaSemilla(X) randomSeed(X);
#define aleatorio(X) random(X);
//Funciones de puerto serie
#define abrePuerto Serial.begin(9600);
#define datoDisponible Serial.available()>0
#define enviaDato(X) Serial.write(X);
#define enviaTexto(X) Serial.println(#X);
#define dato Serial.read()

/* Remapeos de C */
//Estructura
#define comienzoPreparacion void setup(){
#define finPreparacion }
#define comienzoReceta void loop(){
#define finReceta }
//Estructura de control
#define si if(
#define entonces ){
#define finSi }   
#define siNo }else{
#define repetir(X,Y) for(int X=0;X<(Y);X++){
#define finRepetir }
#define porSiempre do{
#define finPorSiempre }while(1);

