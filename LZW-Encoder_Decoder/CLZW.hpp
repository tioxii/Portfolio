/*!
\file CLZW.hpp
\brief CLZW.hpp Basisklasse f�r LZW Encoder und Decoder

Diese Basisklasse zu den abstrakten Klassen CEnc und CDec
stellt zwei statische Methoden und eine Konstante zur Verf�gung.
intToString  wandelt von Integer nach String und
charToInt    wandelt von char nach Integer
Beide statischen Funktionen werden verwendet zur Wandlung
von Zeichen in ihre Indexwerte.

LZW_DICT_SIZE legt die Gr��e des Dictionarys fest.
*/

#pragma once

#include <string>
#include <vector>

using namespace std;

/*! Gr��e des Arrays f�r Dictionary festlegen
// Gr��e des Dictionary bei 16 bit           65636
// Praktikable Gr��e f�r k�rzere Rechenzeit   2000
// Anmerkung: Versuche, diese Konstante anders als �ber Pr�prozessor Deklarative
// festzulegen (statische Variable, Konstante in main.cpp) scheitern,
// da die Initialisierung f�r das CArray zu sp�t stattfindet.
*/
#define LZW_DICT_SIZE 2000

/*!
 * \class CLZW
 * \brief CLZW.hpp Basisklasse f�r LZW Encoder und Decoder
 *
 * intToString erm�glicht  das Umwandeln von Integern zu string
 * charToInt erm�glicht das Umwandeln von einzelnen Elementen eines string in
 * die zugeh�rige ASCII-Zahl auch f�r Eintr�ge 128-255 (z.B. Umlaute)
 */
class CLZW
{
public:

	// erm�glicht das Umwandeln von Integern zu string
	static string intToString(int i);

	// erm�glicht das Umwandeln von einzelnen Elementen eines string in 
	// die zugeh�rige ASCII-Zahl auch f�r Eintr�ge 128-255 (z.B. Umlaute)
	static unsigned int charToInt(char);

	// Gr��e des Dictionary (16 bit)        65636
	// Kleinere Gr��e f�r k�rzere Rechenzeit 2000

};
