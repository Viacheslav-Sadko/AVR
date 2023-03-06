#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000UL

int main(void)
{
	unsigned char arr[3] = {0b00000001, 0b00000011, 0b00000111};
	unsigned char i = 0;
	DDRC = 0b0000000;
	//PORTC = 0b11111111;
	PORTC = 0b0110000;
    DDRD = 0b11111111;
	PORTD = 0b00000000;
	while (1){
		if(!(PINC & 0b0100000)){
			if(i == 3){
				i = 0;
			}
			PORTD = arr[i];
			_delay_ms(500);
			i++;
		}
		else if(!(PINC & 0b0010000)){
			i = 0;
		}
		else
			PORTD = 0;
		
	}
}
//delay_ms(500);
