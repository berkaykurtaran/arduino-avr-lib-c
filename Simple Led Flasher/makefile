hex:
	avr-gcc -Os -DF_CPU=16000000 -mmcu=atmega328p -c led_flash.c
	avr-gcc -DF_CPU=16000000 -mmcu=atmega328p -o led_flash.elf led_flash.o
	avr-objcopy -O ihex led_flash.elf led_flash.hex
flash:
	avrdude -c arduino -p atmega328p -P /dev/ttyACM0 -U flash:w:led_flash.hex
disassemble:
	avr-objdump -d led_flash.elf >led.lst
