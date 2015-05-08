# ArduinoFacil #

Librería (más bien conjunto de macros) para facilitar el uso de Arduino en castellano para principiantes.

# Uso #

## Constantes (LITERAL1) ##
Definiciones constantes.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `SALIDA` | `OUTPUT` |
| `ENTRADA` | `INPUT` |
| `ENTRADA_SUBIDA` | `INPUT_PULLUP` |
| `LED_INCORPORADO` | `LED_BUILTIN` |
| `ACTIVA` | `== HIGH` |
| `INACTIVA` | `== LOW` |
| `CIERTO` | `true` |
| `FALSO` | `false` |

## Semántica nula (LITERAL1) ##
Para facilitar la sintaxis.

`esta`
`hay`

## Estructura (KEYWORD3) ##
Estructura básica del código.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `comienzoPreparacion` | `void setup() {` |
| `finPreparacion` | `}` |
| `comienzoReceta` | `void loop() {` |
| `finReceta` | `}` |

## Estructura de control (KEYWORD3) ##
Estructuras para gestionar el código.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `si` | `if (` |
| `entonces` | `) {` |
| `siNo` | `} else {` |
| `finSi` | `}` |
| `repetir(` _indice_ `,` _veces_ `)` | `for (int` _indice_ `= 0;` _indice_ `<` _veces_ `;` _indice_ `++) {` |
| `finRepetir` | `}` |
| `porSiempre` | `do{` |
| `finPorSiempre` | `} while(1);` |

## Funciones I/O (KEYWORD2) ##
Las funciones digitales.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `estableceComoSalida(` _pin_ `)` | `pinMode(` _pin_ `, OUTPUT);` |
| `estableceComoEntrada(` _pin_ `)` | `pinMode(` _pin_ `, INPUT);` |
| `enciende(` _pin_ `)` | `digitalWrite(` _pin_ `, HIGH);` |
| `apaga(` _pin_ `)` | `digitalWrite(` _pin_ `, LOW);` |
| `entrada(` _pin_ `)` | `digitalRead(` _pin_ `)` |

## Funciones analógicas (KEYWORD2) ##
Funciones analógicas.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `entradaAnalogica(` _pin_ `)` | `analogRead(` _pin_ `)` |
| `enciendeConValor(` _pin_ `,` _valor_ `)` | `analogWrite(` _pin_ `,` _valor_ `);` |

## Funciones de tiempo (KEYWORD2) ##
Gestiona el tiempo.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `espera(` _segundos_ `)` | `delay(` _segundos_ `* 1000 );` |
| `cronometro` | `millis()` |

## Funciones de música (KEYWORD2) ##
Reproduce tonos.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `tono(` _pin_ `,` _frecuencia_ `)` | `tone(` _pin_ `,` _frecuencia_ `);` |
| `finTono(` _pin_ `)` | `noTone(` _pin_ `);`|

## Funciones de aleatoridad (KEYWORD2) ##
Genera números aleatorios.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `generaSemilla(` _semilla_ `)` | `randomSeed(` _semilla_ `);` |
| `aleatorio(` _máximo_ `)` | `random(` _máximo_ `);` |

## Funciones de puerto serie (KEYWORD2) ##
Maneja el puerto serie.

| ArduinoFacil | Arduino equivalente |
| :------- | :------- |
| `abrePuerto` | `Serial.begin(9600);` |
| `datoDisponible` | `Serial.available() > 0` |
| `enviaDato(` _byte_ `)` | `Serial.write(` _byte_ `);` |
| `enviaTexto(` _texto_ `)` | `Serial.println("` _texto_ `");` |
| `dato` | `Serial.read()` |

# Ejemplos #

En los ejemplos incluidos se puede ver la forma de uso.

# Autores #

Esta librería ha sido creada por:

- Jorge Goméz <jorge@sindormir.net>
- kwendenarmo <kwendenarmo@akornsys-rdi.net>

