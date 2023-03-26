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
   | long          | int, mit Vorzeichen.                               | 32                         |
   |               | Minimum Bereich: -32768 bis +32767                 |                            |
   |               | Üblich: -2,147,483,648 bis +2,147,483,647          |                            |
   +---------------+----------------------------------------------------+----------------------------+
   | signed long   | Gleich wie long                                    | 32                         |
   +---------------+----------------------------------------------------+----------------------------+
   | signed int    | Gleich wie long                                    | 32                         |
   +---------------+----------------------------------------------------+----------------------------+


Strukturierte Datentypen
------------------------