#include <stdio.h>
#include "common.h"

main(){
	uint8 t;
	//Starting initializing
	WDTCN = 0xDE;
	WDTCN = 0xAD;
	
	REF0CN = 0x03;
	AMX0SL = 0x02;
	AMX0CF = 0x00;
	ADC0CN = 0x90;
	
	P74OUT = 0x08;
	P5 = 0xD0;
	
	t = 0;
	
	while(1){
		ADC0CN = 0x90;
		t = ADC0H;
		t = t<<4;
		P5 = t;
		
	
	}
	while(1){
		P5 = t;
		t++;
	}


}
