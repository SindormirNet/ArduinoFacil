# ArduinoFacil #

Librería (más bien conjunto de macros) para facilitar el uso de Arduino en
castellano para principiantes.

# Extensión de librerías #

Esta librería permite manejar otras librerías siguiendo la misma filosofía de
**ArduinoFacil**.  
**ArduiniFacil** está creado en módulos, de forma que puede decidir qué otras
librerías añadir o quitar con sólo un comentario en el archivo de cabecera de la
presente librería.  
Por defecto, **ArduinoFacil** sólo trae habilitadas las funciones propias de
Arduino, con el fin de reducir problemas de compilación (si usted no tiene estas
librerías externas) y minimizar el código generado.

TODO: evaluar incluir:

-   newping
-   servo
-   lcd

# Directrices usadas #

-   Palabras clave: Concatenadas sin espacios, la primera letra de cada palabra
    en mayúsculas excepto la inicial.  
    
    ```
    estableceComoEntradaSubida()
    
    ```
    
-   Constantes: Siempre en mayúsculas, si consta de varias palabras, separadas
    por el caracter `_`.  
    
    ```
    LED_INCORPORADO
    ```
    
-   Estamentos: El cierre de estamentos se hace anteponiendo la palabra `fin`
    al principio del nombre del estamento.  
    
    ```
    porSiempre
        //codigo
    finPorSiempre
    ```
    
-   Palabras de sintaxis nula: Se pueden crear palabras para asemejar la
    sintaxis al propio idioma, estas palabras carecen de significado.  
    
    ```
    si entrada(2) esta ACTIVA entonces              //esta
    si hay datoDisponible entonces                  //hay
    si entradaAnalogica(A0) esMayor a 100 entonces  //a
    ```
    
-   Tiempos verbales: Para las acciones se usan imperativos para la accion a
    realizar. Estas forman acciones por sí mismas (acaban en `;`).  
    
    ```
    enciende()
    espera()
    enviaTexto()
    ```
    
-   Adquisición de datos: Para aquellas acciones que devuelvan un valor no hay
    acción, simplemente la palabra clave.
    
    ```
    cronometro
    entrada()
    dato
    ```
    
-   Declaraciones de instancia: Aquellas librerías externas que requieran
    declarar instancias, llevaran la palabra `declara` al principio de la
    acción.  
    
    ```
    declaraMotorUno()
    declaraDistancia()
    ```
    
-   Acciones de preparación: Aquellas funciones que no estén incluidas en el
    módulo AF\_CORE, llevaran la palabra `inicia` al principio de la acción.  
    
    ```
    iniciaDistancia()
    iniciaPuerto()
    ```
    

# Tabla de macros #

## Constantes (LITERAL1) ##

**Módulo**: AF\_CORE.

> Definiciones constantes.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `SALIDA` | `OUTPUT` | **Constante** |
| `ENTRADA` | `INPUT` | **Constante** |
| `ENTRADA_SUBIDA` | `INPUT_PULLUP` | **Constante** |
| `LED_INCORPORADO` | `LED_BUILTIN` | **Constante** |
| `CIERTO` | `true` | **Constante** |
| `FALSO` | `false` | **Constante** |

## Comparaciones (LITERAL1) ##

**Módulo**: AF\_CORE.

> Definiciones constantes.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `ACTIVA` | `== HIGH` | **Operador comparativo**, **Constante** |
| `INACTIVA` | `== LOW` | **Operador comparativo**, **Constante** |
| `esIgual` | `==` | **Operador comparativo** |
| `noEsIgual` | `!=` | **Operador comparativo** |
| `esMayor` | `>` | **Operador comparativo** |
| `esMenor` | `<` | **Operador comparativo** |
| `esMayorOIgual` | `>=` | **Operador comparativo** |
| `esMenorOIgual` | `<=` | **Operador comparativo** |

## Operadores binarios (LITERAL1) ##

**Módulo**: AF\_CORE.

> Amplía las formas de control

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `y` | `) && (` | **Operador binario** |
| `o` | `) || (` | **Operador binario** |

## Semántica nula (LITERAL1) ##

**Módulo**: AF\_CORE.

> Para facilitar la sintaxis.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `esta` | `` | **Nulo** |
| `hay` | `` | **Nulo** |
| `a` | `` | **Nulo** |

## Estructura (KEYWORD3) ##

**Módulo**: AF\_CORE.

> Estructura básica del código.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `comienzoPreparacion` | `void setup() {` | **Estructura** |
| `finPreparacion` | `}` | **Estructura** |
| `comienzoReceta` | `void loop() {` | **Estructura** |
| `finReceta` | `}` | **Estructura** |

## Estructura de control (KEYWORD3) ##

**Módulo**: AF\_CORE.

> Estructuras para gestionar el código.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `si` | `if (` | **Estamento** |
| `entonces` | `) {` | **Estamento** |
| `siNo` | `} else {` | **Estamento** |
| ´siSiNo` | `} else if (` | **Estamento** |
| `finSi` | `}` | **Estamento** |
| `repetir(` _indice_ `,` _veces_ `)` | `for (int` _indice_ `= 0;` _indice_ `<` _veces_ `;` _indice_ `++) {` | **Estamento** |
| `finRepetir` | `}` | **Estamento** |
| `porSiempre` | `do{` | **Estamento** |
| `finPorSiempre` | `} while(1);` | **Estamento** |

TODO: posibles candidatos:

-   guarda _valor_ en _indice_  
-   esperaHastaQue _evento_  
-   repetirHastaQue _evento_  
-   incrementa _indice_
-   ...

## Funciones I/O (KEYWORD2) ##

**Módulo**: AF\_CORE.

> Las funciones digitales.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `estableceComoSalida(` _pin_ `)` | `pinMode(` _pin_ `, OUTPUT);` | **Acción** |
| `estableceComoEntrada(` _pin_ `)` | `pinMode(` _pin_ `, INPUT);` | **Acción** |
| `estableceComoEntradaSubida(` _pin_ `)` | `pinMode(` _pin_ `, INPUT_PULLUP);` | **Acción** |
| `enciende(` _pin_ `)` | `digitalWrite(` _pin_ `, HIGH);` | **Acción** |
| `apaga(` _pin_ `)` | `digitalWrite(` _pin_ `, LOW);` | **Acción** |
| `entrada(` _pin_ `)` | `digitalRead(` _pin_ `)` | **** |

## Funciones analógicas (KEYWORD2) ##

**Módulo**: AF\_CORE.

> Funciones analógicas.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `entradaAnalogica(` _pin_ `)` | `analogRead(` _pin_ `)` |  |
| `enciendeConValor(` _pin_ `,` _valor_ `)` | `analogWrite(` _pin_ `,` _valor_ `);` | **Acción** |

## Funciones de tiempo (KEYWORD2) ##

**Módulo**: AF\_CORE.

> Gestiona el tiempo.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `espera(` _segundos_ `)` | `delay(` _segundos_ `* 1000 );` | **Acción** |
| `cronometro` | `millis()` |  |

## Funciones de música (KEYWORD2) ##

**Módulo**: AF\_CORE\_EXT.

> Reproduce tonos.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `reproduceTono(` _pin_ `,` _frecuencia_ `)` | `tone(` _pin_ `,` _frecuencia_ `);` | **Acción** |
| `silenciaTono(` _pin_ `)` | `noTone(` _pin_ `);`| **Acción** |

## Funciones de aleatoridad (KEYWORD2) ##

**Módulo**: AF\_CORE\_EXT.

> Genera números aleatorios.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `generaSemilla(` _semilla_ `)` | `randomSeed(` _semilla_ `);` | **Acción** |
| `aleatorio(` _máximo_ `)` | `random(` _máximo_ `)` |  |

## Funciones de puerto serie (KEYWORD2) ##

**Módulo**: AF\_CORE\_EXT.  

> Maneja el puerto serie.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `iniciaPuerto` | `Serial.begin(9600);` | **Acción** |
| `datoDisponible` | `Serial.available() > 0` |  |
| `enviaDato(` _byte_ `)` | `Serial.write(` _byte_ `);` | **Acción** |
| `enviaTexto(` _texto_ `)` | `Serial.println("` _texto_ `");` | **Acción** |
| `dato` | `Serial.read()` |  |

## Funciones de GP2Y0A21YK ##

**Módulo**: AF\_GP2Y0A21YK.

> Interpreta datos del sensor Sharp GP2Y0A21YK

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `declaraDistancia` | `DistanceGP2Y0A21YK Dist;` | **Acción** |
| `iniciaDistancia(` _pin_ `)` | `Dist.begin(` _pin_ `);` | **Acción** |
| `distancia` | `Dist.getDistanceCentimeter()` |  |

## Funciones de AccelStepper ##

**Módulo**: AF\_ACCELSTEPPER.

> Mueve motores paso a paso tipo 28BYJ-48 (otros tipos son posibles editando la
  librería).

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `declaraMotorUno(` _pin1_ `,` _pin2_ `,` _pin3_ `,` _pin4_ `);` | `AccelStepper stepperOne(HALF4WIRE,` _pin1_ `,` _pin3_ `,` _pin2_ `,` _pin4_ `);` | **Acción** |
| `iniciaMotorUno` | `stepperOne.setMaxSpeed(1500); stepperOne.setAcceleration(100);` | **Acción** |
| `avanzaMotorUno(` _vueltas_ `)` | `if (stepperOne.distanceToGo() == 0) stepperOne.move(` _vueltas_ `* 4096);` | **Acción** |
| `mueveMotorUno` | `stepperOne.run();` | **Acción** |
| `paraMotorUno` | `stepperOne.stop();` | **Acción** |
| `declaraMotorDos(` _pin1_ `,` _pin2_ `,` _pin3_ `,` _pin4_ `);` | `AccelStepper stepperTwo(HALF4WIRE,` _pin1_ `,` _pin3_ `,` _pin2_ `,` _pin4_ `);` | **Acción** |
| `iniciaMotorDos` | `stepperTwo.setMaxSpeed(1500); stepperTwo.setAcceleration(100);` | **Acción** |
| `avanzaMotorDos(` _vueltas_ `)` | `if (stepperTwo.distanceToGo() == 0) stepperTwo.move(` _vueltas_ `* 4096);` | **Acción** |
| `mueveMotorDos` | `stepperTwo.run();` | **Acción** |
| `paraMotorDos` | `stepperTwo.stop();` | **Acción** |

# Ejemplos #

En los ejemplos incluidos se puede ver la forma de uso.  
TODO: Ampliar librerías

# Autores #

Esta librería ha sido creada por:

- Jorge Goméz <jorge@sindormir.net>  
- kwendenarmo <kwendenarmo@akornsys-rdi.net>

# TODO #

Especificaciones librerías 1.5++  
https://github.com/arduino/Arduino/wiki/Arduino-IDE-1.5:-Library-specification

