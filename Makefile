
TARGET = led
SRCS = DIO.cpp test.cpp
CXX = avr-g++
MCU = atmega32
PROGRAMMER = usbasp
PARTNO = m32
BAUDERATE = 11520
PORT = /dev/tty
CLK = 8000000UL
FLAGS = -std=c++17 -Wall -mmcu=$(MCU) -Os -DF_CPU=$(CLK) 
OBJCPY = avr-objcopy
build: clean
	@echo building...
	@$(CXX) $(FLAGS) -o $(TARGET).elf $(SRCS)
	@$(OBJCPY) -j .text -j .data -O ihex $(TARGET).elf $(TARGET).hex
	@echo done.
flash: build
	@echo flasing...
	@avrdude -v -c $(PROGRAMMER) -p $(PARTNO) -P $(PORT) -b $(BAUDERATE) -U flash:w:$(TARGET).hex:i
	@echo done.
clean:
	@echo removing files...
	@rm -f *.elf *.hex *.o
	@echo done.
