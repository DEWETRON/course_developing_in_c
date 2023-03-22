Einführung
=======================


Die Programmiersprache C
------------------------

C ist eine recht kleine Programmierersprache. Das macht sie anpassbar und 
sehr gut auf großen wie auch kleinen (embedded) Systemen verwendbar.

Erfunden wurde sie im Jahr 1972 von Dennis Ritchie. Sie ist sehr Nahe an der Art
wie ein Prozessor wirklich funktioniert.

Fast alle Betriebssysteme bzw ihr Kern sind in C programmiert. Man kennt vielleicht
Microsoft Windows oder Linux :-).





Begriffe und Werkzeuge
----------------------

Ich sage es kurz: Es gibt deutsche Begriffe für die meisten Werkzeuge. Aber die verwendet keiner.
Software Entwicklung ist eine der Beschäftigungen die nebenbei einen sehr soliden technischen
Wortschatz aufbauen.


Source Code
~~~~~~~~~~~
Der Text der die Grundlage eines Programmes ist. Source Code ist in einer Programmiersprache geschrieben.
Hier im algemeinen in C.


Compiler
~~~~~~~~
Ein Compiler hat die Aufgabe den Source Code eines Programmes für einen Computer zu übersetzen.
Er wird aus unseren Beispielen eine ausführbare Datei generieren. Entweder ein sogenanntes "Executeable",
oder ein "Object" File.

Beispiel: gcc, clang

Preprozessor
~~~~~~~~~~~~
Ein Preprozessor sitzt zwischen dem Source Code und dem Compiler. Der filtert im Source Code diverse
Begriffe ("#include") und ersetzt sie. Bei #include mit dem Inhalt der Datei. Typischerweise eine Header
Datei.

Preprozessor Statements beginnen immer mit einer Raute.

Beispiel: cpp


Integrated Development Environment (IDE)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Wäre zum Beispiel Visual Studio 2022 oder auch Visual Studio Code. Eine IDE kombiniert
Editor, Compiler, Linker, Debugger und alles was man noch so brauchen könnte. Der
Editor unterstützt typischerweise Syntax Highlighting. Das macht Source Code leichter
bearbeit- und lesbar.


Makefile
~~~~~~~~
Ein "Rezept" das steuert wie ein Programm übersetzt werden muss.

Beispiel: make


Debugger
~~~~~~~~
Ein Debugger erlaubt es Fehler in einem Programm zu finden. Man kann die Asuführung beobachten, den
Inhalt von Variablen betrachten und Breakpoints setzen.

Beispiel: gdb, lldb


Profiler
~~~~~~~~
Ein wichtiges Optimierungstool das zeig wo viel Zeit in einem Programm verbraucht wird. An dieses
Stellen kann man dann Änderungen durchführen um hoffentlich eine schnelleres Executeable zu erhalten.


Linker
~~~~~~
Notwendiges Tool um aus mehreren Object Files ein Programm zu erhalten. Nötig da größere Programme
üblicherweise aus mehreren Dateien bestehen.

Beispiel: ld


h File (Header)
~~~~~~~~~~~~~~~
Header files beeinhalten deklarieren Datentypen und Funktionen. 


c File (Source)
~~~~~~~~~~~~~~~
Source files fügen definieren die in Header Files erwähnten Funktionen.


Executeable
~~~~~~~~~~~
Eine ausführbare Datei.


Library
~~~~~~~
Ein binary das nicht ausführbar ist, aber von anderen Executables verwendet werden kann.




Andere Begriffe
---------------


Spaghetticode
~~~~~~~~~~~~~
Typischer Stil der am Anfang einer Programmierkarriere häufig genutzt wird.
Da man das Gefühl für die Größe von Funktionen noch nicht entwickelt hat, entstehen
lange wenig zusammenhängende Funktionen die schwer verständlich und wartbar sind.
Diese Phase geht mit Erfahrung vorbei.


Coding Standard
~~~~~~~~~~~~~~~
Methode erfahrener Programmierer um Junior und Anfänger zu nerven. Nicht nur das man
eine neue Programmiersprache und Beispiele meistern soll, verlangen diese auch noch
einen gewissen Stil, einen Coding Standard, einzuhalten: Funkionen so, Variable auf 
diese Art, usw... Sprache für Kommentare auf Englisch...

Trotzdem wichtig weil der Source Code auf Dauer für alle besser les- und wartbar ist.

