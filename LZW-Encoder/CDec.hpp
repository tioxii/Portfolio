/*!
\file CDec.hpp
\brief Klasse CDec Abstrakte Basisklasse f�r Decodierung

Dieses File enth�lt die abstrakte Basisklasse CDec.
Die beiden zugeh�rigen Files CDec.cpp und CDec.hpp werden
f�r die finale Erfolgskontrolle durch die Originalversionen ersetzt.
*/
#pragma once

#include "CLZW.hpp"
#include <string>
#include <vector>

using namespace std;
/*!
\class CDec
\brief Abstrakte Basisklasse f�r die Decoder

Abstrakte Basisklasse f�r die Decoder.
CDec erbt von CLZW.
Basisklasse der Encoderklassen CArrayDec und CTrieDec.
Von dieser Klasse CDec selbst k�nnen keine Instanzen erstellt werden,
sie ist abstrakt.
 */
class CDec : public CLZW
{
public:
	//! decodiert (restauriert) den String in mit Hilfe des LZW-Algorithmus
	//! \param in Vektor der zu decodierenden Indexwerte
	//! \return decodierter Z�hlerstand
	virtual string decode(const vector<unsigned int> &in)=0;

	//! Virtueller Destruktor
	virtual ~CDec();

};
