#include <avr/io.h>
#include <util/delay.h>


#define BLINK_DELAY_MS 1000

int main (void){
	/*Pin 5 of PORTB is PIN 13 on UNO Board*/
	/* set pin 5 of PORTB for output*/
 DDRB |= _BV(DDB5);

 while(1) {
  /* set pin 13 on board high */
  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);

    /* set pin 13 on board low */
  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 }
}
