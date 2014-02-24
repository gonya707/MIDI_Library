include "midi.h"
include "math.h"

int isNoteOn(unsigned long m){
	return (m >= 0x90 && m <= 0x9F);
}

int isNoteOff(unsigned long m){
	return  (m >= 0x80 &&  m <= 0x8F);
}

int isClock(unsigned long m ){
	return (m==0xf8 || m==0xfe);
}

int noteCode(int note,int octave){
	return(12*(octave-4)+note+69);
}

double code2Freq(int note){
	return 440*pow(2,(m-69)/12);
}
