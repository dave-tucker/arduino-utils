MelodyUtils
===========

Ornaments and articulations for beautiful Arduino melodies.

# Installation
Copy the MelodyUtils folder to your Sketchbook > libraries folder.

# Circuit
This uses the same basic circuit as the [Tone Tutorial](http://arduino.cc/en/Tutorial/Tone)

# Usage
In the Arduino IDE, create a new sketch, click Sketch > Import Library > MelodyUtils

Create an instance of the MelodyUtils class passing the pin that your speaker is connected to as an argument...

	MelodyUtils mel(8);

# Example

	#include <MelodyUtils.h>
	#include <pitches.h>

	void setup()
	{
	  MelodyUtils mel(8);
	  mel.Glis(NOTE_C3, NOTE_C4, 5);
	  delay(1000);
	  mel.Trem(NOTE_C3, 1000, 30);
	}

	void loop()
	{
	}
