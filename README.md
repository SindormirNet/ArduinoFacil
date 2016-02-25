# ArduinoFacil #

Librería (más bien conjunto de macros) para facilitar el uso de Arduino en
castellano para principiantes.

# Extensión de librerías #

Esta librería permite manejar otras librerías siguiendo la misma filosofía de
**ArduinoFacil**.  
**ArduinoFacil** está creado en módulos, de forma que puede decidir qué otras
librerías añadir o quitar con sólo un comentario en el archivo de cabecera de la
presente librería.  
Por defecto, **ArduinoFacil** sólo trae habilitadas las funciones propias de
Arduino, con el fin de reducir problemas de compilación (si usted no tiene estas
librerías externas) y minimizar el código generado.

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

TODO: unificar formato de tablas y añadir ejemplos.

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
| `que` | `` | **Nulo** |

## Estructura (KEYWORD3) ##

**Módulo**: AF\_CORE.

> Estructura básica del código.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `comienzoPreparacion` | `void setup() {` | **Estructura** |
| `finPreparacion` | `}` | **Estructura** |
| `comienzoReceta` | `void loop() {` | **Estructura** |
| `finReceta` | `}` | **Estructura** |
| `comienzoInterrupcion` | `void isroutine() {` | **Estructura** |
| `finInterrupcion` | `}` | **Estructura** |

## Variables (KEYWORD3) ##

**Módulo**: AF\_CORE.

> Declara, inicializa y gestiona variables tipo int.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `creaVariable(` _indice_ `)` | `long ` _indice_ `= 0;` | **Acción** |
| `guardaValor(` _valor_ `,` _indice_ `)` | _indice_ `= `_valor_ `;` | **Acción** |
| `incrementaValor(` _valor_ `,` _indice_ `)` | _indice_ `+= `_valor_ `;` | **Acción** |
| `desplazaValorAIzquierdas(` _valor_ `,` _indice_ `)` | _indice_ `<< `_valor_ `;` | **Acción** |
| `desplazaValorADerechas(` _valor_ `,` _indice_ `)` | _indice_ `>> `_valor_ `;` | **Acción** |

## Estructura de control (KEYWORD3) ##

**Módulo**: AF\_CORE.

> Estructuras para gestionar el código.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `si` | `if (` | **Estamento** |
| `entonces` | `) {` | **Estamento** |
| `siNo` | `} else {` | **Estamento** |
| `siSiNo` | `} else if (` | **Estamento** |
| `finSi` | `}` | **Estamento** |
| `repetir(` _indice_ `,` _veces_ `)` | `for (int` _indice_ `= 0;` _indice_ `<` _veces_ `;` _indice_ `++) {` | **Estamento** |
| `finRepetir` | `}` | **Estamento** |
| `porSiempre` | `do {` | **Estamento** |
| `finPorSiempre` | `} while (1);` | **Estamento** |
| `esperaMientrasQue` | `while ( ` | **Estamento** |
| `finEsperaMientrasQue` | `);` | **Estamento** |
| `repetirMientrasQue` | `while ( ` | **Estamento** |
| `finRepetirMientrasQue` | `}` | **Estamento** |

## Funciones de interrupción (KEYWORD2) ##

**Módulo**: AF\_CORE.

> Proporciona la declaración de interrupciones.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `iniciaInterrupcionBajada(` _pin_ `)` | `attachInterrupt(` _pin_ `- 2, isroutine, FALLING);` | **Acción** |
| `iniciaInterrupcionSubida(` _pin_ `)` | `attachInterrupt(` _pin_ `- 2, isroutine, RISING);` | **Acción** |
| `declaraInterrupcion` | `void isroutine();` | **Acción** |

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
| `enciendeConValor(` _pin_ `,` _valor_ `)` | `analogWrite(` _pin_ `, map(` _valor_ `, 0, 100, 0, 255));` | **Acción** |

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
| `enviaTexto(` _texto_ `)` | `Serial.println(` _texto_ `);` | **Acción** |
| `dato` | `Serial.read()` |  |

## Funciones de GP2Y0A21YK ##

**Módulo**: AF\_DISTANCE.

> Interpreta datos de sensores de distancia Sharp GP2Y0A21YK, GP2Y0A41SK, SRF-04
> y SRF-05.

| ArduinoFacil | Arduino equivalente | Tipo |
| :------- | :------- | :------- |
| `declaraDistancia` | `DistanceGP2Y0A21YK Dist;` | **Acción** |
| `iniciaDistancia(` _pin_ `)` | `Dist.begin(` _pin_ `);` | **Acción** |
| `distancia` | `Dist.getDistanceCentimeter()` |  |

# Ejemplos #

En los ejemplos incluidos se puede ver la forma de uso.  
TODO: Ampliar librerías

# Autores #

Esta librería ha sido creada por:

- Jorge Goméz <jorge@sindormir.net>  
- kwendenarmo <kwendenarmo@akornsys-rdi.net>

