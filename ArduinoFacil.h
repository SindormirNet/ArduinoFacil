
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
 */


//Remapeos de constantes
#define SALIDA OUTPUT
#define ENTRADA INPUT
#define ACTIVA ==HIGH
#define INACTIVA ==LOW
#define esta 

//Remapeos de funciones de Arduino
#define estableceComoSalida(X) pinMode(X, OUTPUT);
#define estableceComoEntrada(X) pinMode(X, INPUT);
#define enciende(X) digitalWrite(X, HIGH);
#define apaga(X) digitalWrite(X, LOW);
#define espera(X) delay(X*1000);
#define entrada(X) digitalRead(X)

//Remapeos de C
#define comienzoPreparacion void setup(){
#define finPreparacion }
#define comienzoReceta void loop(){
#define finReceta }

#define si if(
#define entonces ){
#define finSi }   

