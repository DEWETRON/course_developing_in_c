Das Erste Programm
==================

Beim Erlernen einer ersten oder neuen Programmiersprache gibt es seit jeher eine kleine Tradition:
Das erste Programm ist "Hello World!", ein Programm das bei seiner Ausführung die
Welt begrüßt.

Und natürlich machen wir das auch hier und hoffentlich lernen wir auch was dabei!


Hello World in C
----------------

.. code-block:: C
    :caption: hello_world.c

    // Erste Übung "Hello World"

    #include <stdio.h>

    int main()
    {
        printf("Hello World\n");
        return 0;
    }


Und was sehen wir hier alles?

Ein Programm besteht aus Funktionen und Variablen. Oder auch ganz ohne Variablen in unserem einfachen Fall.
Funktionen bestehen aus "Statements".  'printf' im Bespiel ist eine Funktion, und 'printf("Hello World\n");'
ein Aufruf der Funktion printf mit dem Argument "Hello World\\n".

Auch "int main()" ist eine Funktion. Genauer gesagt ist es die Definition der Hauptfunktion (== main). Diese
ist für ein Programm Pflicht und wird beim Start des Programmes von der C Runtime aufgerufen.

**return 0;** ist der Exitcode des Programmes. Der Wert 0 ist bedeutet in diesem Zusammenhang üblerweise ok, das eben 
alles geklappt hat.

Und was gibt es noch?

**#include<stdio.h>**

ist eine Anweisung für den C Preprozessor. Er sucht diese Datei "stdio.h", ein Standard-Header, und fügt den Inhalt
dieses Datei zu unserem Sourcecode hinzu. Erst dadurch bekommen wir die "printf" Funktion zur Verfügung und können
diese dann aufrufen.

**int** das ist unser erster Kontakt mit einem Datentypen. int steht für "integer" und bezeichnet ganzzahlige Datentypen
im Bereich von 32Bit. In einem int kann man Werte zwischen -2^31 bis 2^31-1 darstellen. Wer das nicht im Kopf ausrechnen kann,
das sind -2.147.483.648 bis 2.147.483.647. Reicht sicher mal fürs erste.

Der Text "Hello World\\n" ist ein C ein Character Array auch string genannt.
Jedes Zeichen dieses strings hat den ""char" Datentyp. Ein char "Character" hat 8 Bit, kann also Werte zwischen -128 und 127 
annehmen. Das reicht für die Buschstaben unseres Alphabetes.

Im Speicher sieht das dann so aus:


.. tabularcolumns:: |p{2.5cm}|p{2.5cm}|p{2.5cm}|

.. table:: "Hello World" im Speicher
   :widths: 20 20 20

   +---------------+--------------------------+------------------------------------------------------+
   | **Index**     | **Character**            | **Wert**                                             |
   +===============+==========================+======================================================+
   | 0             | H                        | 72                                                   |
   +---------------+--------------------------+------------------------------------------------------+
   | 1             | e                        | 101                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 2             | l                        | 108                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 3             | l                        | 108                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 4             | o                        | 111                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 5             | ' '                      | 32                                                   |
   +---------------+--------------------------+------------------------------------------------------+
   | 6             | W                        | 87                                                   |
   +---------------+--------------------------+------------------------------------------------------+
   | 7             | o                        | 111                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 8             | r                        | 114                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 9             | l                        | 108                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 10            | d                        | 100                                                  |
   +---------------+--------------------------+------------------------------------------------------+
   | 11            | \n                       | 10                                                   |
   +---------------+--------------------------+------------------------------------------------------+
   | 12            | \0                       | 0                                                    |
   +---------------+--------------------------+------------------------------------------------------+


Das **\\n** kommt wirklich noch aus der Zeit der Schreibmaschine und bedeutet *linefeed*, also zur nächsten Zeile
wechseln. **\\r** ist *carriage return* und stellt die Schreibposition wieder an den Anfang der Zeile zurück.

Ein String hat variable Länge und muss demnach ein Ende haben. Dies wird mit 0 bzw mit \0 markiert. Man nennt diese
*zero-terminated*. Ansonsten 
würde printf einfach weiter Zeichen ausgeben und (wahrscheinlich) unser Programm zum Abstürzen bringen.



Compilieren von Hello World
---------------------------

Das kann man nun auf gefühlt 100 verschiedenen Methoden machen. Je nachdem man welche IDE, Editor und oder
Betriebssystem verwendet.

Hier zeige ich es mal wie man es in einem Terminal oder Eingabe Aufforderung machen kann. 
"-Wall" ist übrigens eine Option mit der man dem Compiler sagen kann, das er warnen soll wenn ihm irgendetwas
seltsam am Source Code auffällt. Inzwischen sind die Warnung oft schon gut verständlich und moderne Compiler
machen dann auch Verbesserungsvorschläge.

.. code-block:: console
    :caption: hello_world.c compilieren und ausführen

    gcc -Wall hello_world.c -o hello_world.exe
    ./hello_world 
    Hello World
