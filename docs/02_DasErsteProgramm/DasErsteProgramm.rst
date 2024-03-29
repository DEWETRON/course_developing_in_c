Das erste Programm
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



String Formattierung und Ausgabe
--------------------------------

Aufbauend auf dem *Hello World* Beispiel möchte ich im nächsten ein wenig auf die Text Ausgabe und
String Formattierung eingehen. Im Prinzip möchte ich die Tabelle "Hello World im Speicher" automatisch
generieren lassen.

Dazu werden wir neue Sprachfeatures kennen lernen:

    * char array als Datentyp
    * sizeof Operator
    * **for** Schleife
    * printf Formatstrings
    * hexadecimale Zahlendarstellung


.. code-block:: C
    :caption: hello_world.c

    // Zweite Übung "Hello World Zeichentabelle"

    #include <stdio.h>

    int main()
    {
        int i;
        char hw_text[] = "Hello World\n";

        for (i=0; i<sizeof(hw_text); ++i)
        {
            printf("%2d  %c  %3d  %02x\n", i, hw_text[i], hw_text[i], hw_text[i]);
        }
        
        return 0;
    }

Schauen wir uns das zweite Programm etwas genauer an. Als erstes defineren wir eine int Variable i.
Diese brauchen wir als Laufvariable in der weiter unten genutzten for-Schleife.

Nebeninfo: In C müssen Variablen immer am Anfang eines Scopes definiert sein. Das bedeutet zB am 
Anfang einer Funktion.

Dannach definieren wir Platz für unseren Textes mit Hilfe eines *char arrays*. Ohne Angabe eine
Größe innerhalb der eckigen Klammern [], passt sich das Array automatisch dem Text der Zuweisung
an. Inklusive des abschließenden \0, das mann so leider nicht sieht (implizit).

Nun kommt unsere erste *for* Schleife. Eine *for* Schleife hat 3 Argumente:

1. Initialer Wert:  i=0;  i started mit dem Wert 0
2. Abbruch oder End Bedingung: Wiederhole solange i kleiner dem angegeben Wert ist
3. Inkrement: ++i ist eine Kurzform der Berechnung i=i+1.


Lustig: ++i und i++ machen in diesem Fall das Gleiche haben aber einen subtilen Unterschied:
Preinkrement vs Postinkrement. Dazu aber später mehr.

Mit *sizeof* lernen wir einen sogenannten Operator kennen. Eine in die Sprache C eingebaute, frei 
verwendbare Funktion. *sizeof* ermittelt uns den Platzbedarf einer Variable in Bytes. Für unser array
meldet es 13 Bytes.

.. note::
    Frage: Welchen Wert würde uns sizeof(i) ausgeben?

Unsere Schleife wird nun 13 Mal durchgeführt. Mit i können wir die einzelnen Einträge des arrays 
direkt ansprechen und ausgeben lassen.


Der Aufruf von printf sieht bei diesem Beispiel schon deutlich komplizierter aus. Das erste Argument
ist der sogenannte "Formatstring".


Im Detail sagt der Formatstring "%2d  %c  %3d  %02x\n" wie in unserem Programm die Textausgabe aussehen soll:

* "%2d"
    * Ausgabe eines *int* in Dezimalformat mit mindestens zwei Stellen. "%d" wäre die einfache Ausgabe eines int.
* "%c"
    * Ausgabe eines *char* also einem einzelnen Zeichen.
* "%3d"
    * Ausgabe eines *int* in Dezimalformat mit mindestens drei Stellen.
* "%02x"
    * Ausgabe eines *int* in Hexdezimalformat mit mindestens 2 Stellen. 02 füllt leere Stellen links mit Nullen auf: zB statt 'a' wird '0a' ausgegeben.

Das war nur ein kleiner Ausflug in die printf Formatoptionen. Was es sonst noch gibt kann man hier https://cplusplus.com/reference/cstdio/printf/ 
nachschlagen.


Hexadezimalformat?
~~~~~~~~~~~~~~~~~~
Ganz kurz möchte ich Hexadezimalformat erklären, zumindest für jene die diesen Begriff noch nie gehört haben.
Die Hexadezimal Darstellung verwendet für eine Zahl nicht nur die Zeichen 0 bis 9 sondern zusätzlich auch
noch A,B,C,D,E,F. Diese entsprechen den Zahlenwerten 10,11,12,13,14,15.

Wir machen das nicht für mehr Verwirrung und Jobsicherheit, sondern weil sich hexadezimale Werte sich sehr leicht auf
binäre Werte umrechnen lassen. Eine hexadezimale Ziffer besteht immer genau aus 4 binären Ziffern:

.. tabularcolumns:: |p{2.5cm}|p{2.5cm}|p{2.5cm}|

.. table:: Dezimal, Hexadezimal, Binär
   :widths: 20 20 20

   +---------------+--------------------------+------------------------------------------------------+
   | **Dezimal**   | **Hexadezimal**          | **Binär**                                            |
   +===============+==========================+======================================================+
   | 0             | 0                        | 0000                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 1             | 1                        | 0001                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 2             | 2                        | 0010                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 3             | 3                        | 0011                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 4             | 4                        | 0100                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 5             | 5                        | 0101                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 6             | 6                        | 0110                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 7             | 7                        | 0111                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 8             | 8                        | 1000                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 9             | 9                        | 1001                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 10            | A                        | 1010                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 11            | B                        | 1011                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 12            | C                        | 1100                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 13            | D                        | 1101                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 14            | E                        | 1110                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 15            | F                        | 1111                                                 |
   +---------------+--------------------------+------------------------------------------------------+
   | 16            | 10                       | 10000                                                |
   +---------------+--------------------------+------------------------------------------------------+
 

.. note::
    Und jetzt verstehen wir hoffentlich den alten Programmierer Witz:

    There are 10 types of people in this world, those who understand binary and those who dont.


Compilieren von Hello World Table
---------------------------------

.. code-block:: console
    :caption: hello_world_table.c compilieren und ausführen

    gcc -Wall hello_world_table.c -o hello_world_table.exe
    ./hello_world_table
     0  H   72  48
     1  e  101  65
     2  l  108  6c
     3  l  108  6c
     4  o  111  6f
     5      32  20
     6  W   87  57
     7  o  111  6f
     8  r  114  72
     9  l  108  6c
    10  d  100  64
    11  
        10  0a
    12      0  00


Hat wer eine Idee was bei Index 11 in der Ausgabe passiert?


Kommentare in C
---------------

Multiline Kommentare
~~~~~~~~~~~~~~~~~~~~

Kommentarblöcke beginnen in C mit /\* und enden mit \*/. Sie können über mehrere
Zeilen gehen. Der Inhalt dieser Blöcke wird vom Compiler ignoriert. 


.. code-block:: C
    :caption: hello_world.c auskommentiert

    #include <stdio.h>

    int main()
    {
        /*
        int i;
        char hw_text[] = "Hello World\n";

        for (i=0; i<sizeof(hw_text); ++i)
        {
            printf("%2d  %c  %3d  %02x\n", i, hw_text[i], hw_text[i], hw_text[i]);
        }
        */
        
        return 0;
    }

Singleline Kommentare
~~~~~~~~~~~~~~~~~~~~~

Diese beginnen mit //. Alles hinter // wird vom Compiler ignoriert.

.. code-block:: C
    :caption: hello_world.c auskommentiert

    #include <stdio.h>

    // main function
    int main()
    {
        int i;
        char hw_text[] = "Hello World\n";

        // loop over every character of the text
        for (i=0; i<sizeof(hw_text); ++i)
        {
            printf("%2d  %c  %3d  %02x\n", i, hw_text[i], hw_text[i], hw_text[i]);
        }
        
        // end of program
        return 0;
    }

.. note:: 
    Kommentare werden genutzt um Source Code lesbarer zu machen. Man kann sie aber auch 
    ausnutzen im Teile "auszukommentieren" also vor dem Compiler zu verstecken, zB bei der
    Fehlersuche.