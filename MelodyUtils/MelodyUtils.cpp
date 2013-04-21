/*
 melodyUtils.cpp
 
 Ornaments and articulations for beautiful Arduino melodies.
 
 created 21 Apr 2013
 by Dave Tucker
 
*/

#include "melodyUtils.h"

#include "Arduino.h"
#include "pitches.h"

MelodyUtils::MelodyUtils(int pin)
{
  _pin = pin;
}

void MelodyUtils::Glis(int note1, int note2, int rate) 
{
  // Glissando = Slide
  // Slides up or down from note1 to note2
  // rate = 0 is fast and can be increased to slow the effect down
  if (note1 < note2)
  {
    //Slide up
    int i = note1;
    while (i < note2)
    {
      tone(_pin, i);
      delay(rate);
      i++;
    }
  }
  else
  {
    //Slide down
    int i = note1;
    while (i > note2)
    {
      tone(_pin,i);
      delay(rate);
      i--;
    }
  }
  noTone(_pin);
}

void MelodyUtils::Trem(int note, int length, int rate)
{
  // Tremolo = Fast repetition of a note
  // note = the note (from pitches.h)
  // length = duration of the effect in msec
  // rate = number of repetitions

  int note_duration = length/rate;
  int pauseBetweenNotes = rate * (1 + rate/length);

  for (int i = 0; i <= rate; i++)
  {
    tone(_pin, note, note_duration);
    delay(pauseBetweenNotes);
    noTone(_pin);
  }
}

      
    

