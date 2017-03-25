# MANO ROBÓTICA
Mano controlada por un arduino a través de sensores flexibles.

Éste proyecto fue realizado para las sesiones del mes de marzo.

La construcción de la mano se divide en 2 partes:

### SESIÓN 1:

##### Objetivo:

Al término del tema los y las participantes elaborarán sensores flexibles de bajo costo y divisor
de voltaje, para controlar la mano articulada.

##### Material:

● Bolígrafo
● Lápiz
● Sacapuntas
● Laptop
● 2 hojas de papel
● Papel aluminio
● Pegamento
● 1m de cable conductor calibre 22
● Cinta de aislar
● Tijeras
● Regla
● Cinta adhesiva de 5 cm de ancho
● Resistencias de 4.7 k Ohms (kilo ohms)
● Protoboard
● Placa Arduino
● IDE de Arduino

A continuación se explica lo que se realizó en la primera sesión.

##### Procedimiento:

1. Mide cada uno de tus dedos desde la base del dedo hasta la punta.
2. Corta 5 tiras de papel, el largo debe ser del doble de la medida de cada uno de tus dedos y de 3 cm de ancho.
3. Dobla cada tira de papel por la mitad a lo ancho.
4. Rellena con grafito toda la cara interna de la hoja.
5. Corta 10 tiras de papel aluminio con la medida de cada uno de los dedos y con 1 cm de ancho.
6. Pega las tiras de aluminio a la hoja de papel, en la parte que tiene grafito, cuidando que no se toque estas tiras.
7. Corta el cable conductor por secciones de 6 cm.
8. Quita el aislante de los extremos del cable conductor.
9. Coloca un cable sobre cada tira de papel aluminio y fíjalo con un pedazo de cinta de aislar.
10. Dobla la tira de papel por la mitad, procurando que quede completamente simétrica.
11. Corta una tira de cinta adhesiva del mismo tamaño que la tira de papel.
12. Coloca la tira de papel sobre la cinta adhesiva y recortar el excedente.
13. Para comprobar la variación de señal en el sensor, conecta los circuitos como se muestra en el diagrama 1 (ver Diagrama).
14. Se procede a abrir el IDE de Arduino.
15. Conecta el Arduino a tu computadora.

###### Nota1: comprueba que tu computadora reconozca tus puertos, en caso contrario, descárgalos de la página oficial de Arduino: www.arduino.cc/en/Guide/ArduinoUno#toc3 (recuerda que este método sólo funcionará sí tu Arduino es original.

###### Nota 2: Si tu Arduino es genérico, revisa la siguiente liga: http://www.geekfactory.mx/sin-categoria/driver-ch340-para-arduinochinos-o-genericos/

16. Selecciona la pestaña de “Archivo” o “File”.
17. Da click en “Ejemplos”--> click en “01.Basicos”-->click en “AnalogReadSerial”. Si tienes la version en ingles “Ejemplos-->01.Basics-->AnalogReadSerial”
18. Selecciona “Compilar” o “Verify” (icono con una palomita) para comprobar que no haya errores.
19. Carga el programa a la placa Arduino.
20. Ve a la pestaña de “Herramientas” o “Tools” y da click en “Monitor Serial”.
21. Al doblar el sensor flexible deberá generarse una variación de señal (valores de 0 a 1023) que se verá reflejada en el monitor serial. En caso de querer notar esa diferencia de manera lenta, en el código busca la instrucción ‘delay’ y cambia el valor por 1000 o 1500, el valor que cambies es en milisegundos, es decir, 1000 ms = 1seg.

##### IMPORTANTE:
No deben quedar bolsas de aire en los sensores pues esto ocasionará que no haya variación en los mismos. Así que procura que queden lo más lisos posibles.


