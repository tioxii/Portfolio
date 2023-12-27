/*!
\file CEnc.hpp
\brief Klasse CEnc Abstrakte Basisklasse f�r Encodierung

Dieses File enth�lt die abstrakte Basisklasse CEnc.
Die beiden zugeh�rigen Files CEnc.cpp und CEnc.hpp werden
f�r die finale Erfolgskontrolle durch die Originalversionen ersetzt.
*/
#pragma once

#include "CLZW.hpp"
#include <string>
#include <vector>

using namespace std;
/*!
\class CEnc
\brief Abstrakte Basisklasse f�r die Encoder

Abstrakte Basisklasse f�r die Encodierung.
CEnc erbt von CLZW.
Basisklasse der Encoderklassen CArrayEnc und CTrieEnc.
Von dieser Klasse CEnc selbst k�nnen keine Instanzen erstellt werden,
sie ist abstrakt.
 */
class CEnc : public CLZW
{
public:
	//! encodiert (komprimiert) den String in mit Hilfe des LZW-Algorithmus
	//! \param in String der zu encodierenden Zeichenfolge
	//! \return Vektor der zu �bertragenden Indexwerte
	virtual vector<unsigned int> encode(const string &in) =0;

	// Destruktor
	virtual ~CEnc();

};
