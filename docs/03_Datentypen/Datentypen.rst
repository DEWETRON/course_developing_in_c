Datentypen
==========

In der Enführung haben wir die *int* und *char* Datentypen kennen gelernt. Nun 
sehen wir uns an welche es in C noch gibt:

1. char
2. int
3. float
4. double


Weiters gibt es *modifiers* die man mit den Datentypen kombinieren kann:

1. signed
2. unsigned
3. short
4. long


Das ergibt diese Liste gültiger Kombinationen

.. tabularcolumns:: |p{2.5cm}|p{2.5cm}|p{2.5cm}|

.. table:: Datentypen
   :widths: 20 20 20

   +---------------+----------------------------------------------------+----------------------------+
   | **Type**      | **Erklärung**                                      | **Größe (minimum, bits)**  |
   +===============+====================================================+============================+
   | char          | Kleinster adressierbarer Datentyp für ein Zeichen. | 8                          |
   |               | Signed oder unsigned.                              |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | signed char   | Gleiche Größe wie char, mit Vorzeichen.            | 8                          |
   |               | Minimum Bereich: -128 bis +127                     |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned char | Gleiche Größe wie char, ohne Vorzeichen.           | 8                          |
   |               | Minimum Bereich: 0 bis +255                        |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | short int     | Kurzer int, mit Vorzeichen.                        | 16                         |
   |               | Minimum Bereich: -32768 bis +32767                 |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | short         | Gleich wie short int                               | 16                         |
   +---------------+----------------------------------------------------+----------------------------+
   | signed short  | Gleich wie short int                               | 16                         |
   +---------------+----------------------------------------------------+----------------------------+
   | signed short  | Gleich wie short int                               | 16                         |
   | int           |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned short| Kurzer int, ohne Vorzeichen.                       | 16                         |
   | int           | Minimum Bereich: 0 bis +65535                      |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned short| Gleich wie unsigned short int                      | 16                         |
   |               |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | int           | int, mit Vorzeichen.                               | 16 (minimum), 32 (üblich)  |
   |               | Minimum Bereich: -32768 bis +32767                 |                            |
   |               | Üblich: -2,147,483,648 bis +2,147,483,647          |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | signed        | Gleich wie int                                     | 16 (minimum), 32 (üblich)  |
   +---------------+----------------------------------------------------+----------------------------+
   | signed int    | Gleich wie int                                     | 16 (minimum), 32 (üblich)  |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned      | unsigned int, mit Vorzeichen.                      | 16 (minimum), 32 (üblich)  |
   |               | Minimum Bereich: 0 bis +65535                      |                            |
   |               | Üblich: 0 bis +4,294,967,295                       |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned int  | Gleich wie unsigned int                            | 16 (minimum), 32 (üblich)  |
   +---------------+----------------------------------------------------+----------------------------+
   | long int      | int, mit Vorzeichen.                               | 32                         |
   |               | Minimum Bereich: -2,147,483,648 bis +2,147,483,647 |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | long          | Gleich wie long int                                | 32                         |
   +---------------+----------------------------------------------------+----------------------------+
   | signed long   | Gleich wie long int                                | 32                         |
   | int           |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | signed long   | Gleich wie long int                                | 32                         |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned long | Gleich wie long, ohne Vorzeichen                   | 32                         |
   |               | Minimum Bereich: 0 bis +4,294,967,295              |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned long | Gleich wie unsigned long                           | 32                         |
   | int           |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | long long int | long long int, mit Vorzeichen.                     | 64                         |
   |               | Minimum Bereich: −9,223,372,036,854,775,808 bis    |                            |
   |               | +9,223,372,036,854,775,807                         |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | signed long   | Gleich wie long long int                           | 64                         |
   | long int      |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | long long     | Gleich wie long long int                           | 64                         |
   +---------------+----------------------------------------------------+----------------------------+
   | signed long   | Gleich wie long long int                           | 64                         |
   | long          |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned long | long long int, ohne Vorzeichen.                    | 64                         |
   | long int      | Minimum Bereich: 0 bis                             |                            |
   |               | +18,446,744,073,709,551,615                        |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | unsigned long | Gleich wie unsigned long long int                  | 64                         |
   | long          |                                                    |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | float         | Zahl mit Nachkommastellen                          | 32                         |
   |               | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | double        | Zahl mit Nachkommastellen                          | 64                         |
   |               | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | long double   | Zahl mit Nachkommastellen                          | 128                        |
   |               | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+


Seit C99 gibt es noch spezielle Datentypen für *complexe* Werte. Das sind Gleitkommazahlen
die einen Real und einen Imaginärteil haben. Wer in eine HTL gegangen ist, dem ist der Nutzen
bekannt. Die meißten Anderen können das getrost ignorieren.

.. tabularcolumns:: |p{2.5cm}|p{2.5cm}|p{2.5cm}|

.. table:: Komplexe Datentypen
   :widths: 20 20 20

   +---------------+----------------------------------------------------+----------------------------+
   | float _Complex| komplexe Zahl mit Nachkommastellen                 | 64                         |
   |               | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | double        | Komplexe Zahl mit Nachkommastellen                 | 128                        |
   | _Complex      | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | long double   | Komplexe mit Nachkommastellen                      | 256                        |
   | _Complex      | Nicht genau definiert.                             |                            |
   +---------------+----------------------------------------------------+----------------------------+

Außerdem gibt es noch _Bool (seit C99). Dieser kann nur die Werte 0 oder 1 annehmen.


Wichtig und am Anfang sicher seltsam: Der Datentype *void*.
Er wird zum Beispiel dazu benützt um Funktionen zu definieren, die keinen Rückgabewert haben.

.. code-block:: C
    :caption: void Funktion

    void print_hello()
    {
         printf("hello\n");
    }


Strukturierte Datentypen
------------------------

