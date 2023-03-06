#include <avr/io.h>


int main(void){
	
	DDRD = 0b00000111;
	
    while (1) {
			PORTD = 0b00000111;
		}
}

