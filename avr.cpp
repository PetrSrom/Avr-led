#include <avr/ioh>                      // Knihovna pro I/O
#define F_CPU 8000000
#include <util/delay.h                  // Knihovna zpoždění

int main (void)                         // Hlavní funkce
{
    DDRB = 0b00000001;                  //PB0 jako výstup
    PORTB= 0b00000010;                  //pull-up na PB1

    while(1)                            // nekonečná smyčka
    {
        if ((PINB & 0b00000010==0){
            PORTB = 0b00000001;
        }else{
            PORTB = 0b00000000;
        }
    }
}
