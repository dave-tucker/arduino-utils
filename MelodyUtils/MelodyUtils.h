/* 
 melodyUtils.h 
 
 Ornaments and articulations for beautiful Arduino melodies.
 
 created 21 Apr 2013
 by Dave Tucker
*/

#ifndef MELODY_UTILS_H
#define MELODY_UTILS_H

#include "Arduino.h"

class MelodyUtils
{
public:
	MelodyUtils(int pin);
	void Glis(int note1, int note2, int rate);
	void Trem(int note, int length, int rate);
private:
	int _pin;
};
#endif