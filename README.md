# ArduinoFacil #

Librería (más bien conjunto de macros) para facilitar el uso de Arduino en castellano para principiantes.

# Uso #

## Constantes (LITERAL1) ##
Definiciones constantes.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`SALIDA`|`OUTPUT`|
|`ENTRADA`|`INPUT`|
|`ENTRADA_SUBIDA`|`INPUT_PULLUP`|
|`LED_INCORPORADO`|`LED_BUILTIN`|
|`ACTIVA`|`== HIGH`|
|`INACTIVA`|`== LOW`|
|`CIERTO`|`true`|
|`FALSO`|`false`|

## Semántica nula (LITERAL1) ##
Para facilitar la sintaxis.

`esta`
`hay`

## Estructura (KEYWORD3) ##
Estructura básica del código.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`comienzoPreparacion`|`void setup() {`|
|`finPreparacion`|`}`|
|`comienzoReceta`|`void loop() {`|
|`finReceta`|`}`|

## Estructura de control (KEYWORD3) ##
Estructuras para gestionar el código.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`si`|`if (`|
|`entonces`|`) {`|
|`siNo`|`} else {`|
|`finSi`|`}`|
|`repetir(` indice `,`veces `)`|`for (int` indice `= 0;` indice `<` veces `;` indice `++) {`|
|`finRepetir`|`}`|
|`porSiempre`|`do{`|
|`finPorSiempre`|`} while(1);`|

## Funciones I/O (KEYWORD2) ##
Las funciones digitales.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`estableceComoSalida(` pin `)`|`pinMode(` pin `, OUTPUT);`|
|`estableceComoEntrada(` pin `)`|`pinMode(` pin `, INPUT);`|
|`enciende(` pin `)`|`digitalWrite(` pin `, HIGH);`|
|`apaga(` pin `)`|`digitalWrite(` pin `, LOW);`|
|`entrada(` pin `)`|`digitalRead(` pin `)`|

## Funciones analógicas (KEYWORD2) ##
Funciones analógicas.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`entradaAnalogica(` pin `)`|`analogRead(` pin `)`|
|`enciendeConValor(` pin `,` valor `)`|`analogWrite(` pin `,` valor `);`|

## Funciones de tiempo (KEYWORD2) ##
Gestiona el tiempo.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`espera(` segundos `)`|`delay(` segundos `* 1000 );`|
|`cronometro`|`millis()`|

## Funciones de música (KEYWORD2) ##
Reproduce tonos.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`tono(` pin `,` frecuencia `)`|`tone(` pin `,` frecuencia `);`|
|`finTono(` pin `)`|`noTone(` pin `);`|

## Funciones de aleatoridad (KEYWORD2) ##
Genera números aleatorios.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`generaSemilla(` semilla `)`|`randomSeed(` semilla `);`|
|`aleatorio(` máximo `)`|`random(` máximo `);`|

## Funciones de puerto serie (KEYWORD2) ##
Maneja el puerto serie.

|ArduinoFacil|Arduino equivalente|
|:-|:-|
|`abrePuerto`|`Serial.begin(9600);`|
|`datoDisponible`|`Serial.available() > 0`|
|`enviaDato(` byte `)`|`Serial.write(` byte `);`|
|`enviaTexto(` texto `)`|`Serial.println("` texto `");`|
|`dato`|`Serial.read()`|

# Ejemplos #

En los ejemplos incluidos se puede ver la forma de uso.

# Autores #

Esta librería ha sido creada por:

- Jorge Goméz <jorge@sindormir.net>
- kwendenarmo <kwendenarmo@akornsys-rdi.net>

