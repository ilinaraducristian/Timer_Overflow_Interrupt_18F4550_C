/*
 * File:   main.c
 * Author: Reydw
 *
 * Created on November 11, 2019, 6:09 PM
 */


#include <xc.h>

void __interrupt(high_priority) ISRH(void) {
    INTCONbits.TMR0IF = 0;
    return;
}

void __interrupt(low_priority) ISRL(void) {
    INTCONbits.TMR0IF = 0;
    return;
}

void main(void) {
    TRISA = 0;
    LATA = 0;
    TRISB = 0;
    LATB = 0;
    TRISC = 0;
    LATC = 0;
    TRISD = 0;
    LATD = 0;
    
    INTCON = 0b11100000;
    INTCON2 = 0b00000000;
    INTCON3 = 0;
    RCONbits.IPEN = 1;
    T0CON = 0b11001000;
    TMR0H = 0;
    TMR0L = 0;
    unsigned char x = 255;
    x >>= 4;
    while(1);
    return;
}

