#ifndef __DHT11_H__
#define __DHT11_H__

#include <REG52.h>


sbit dht = P3^7;

void DHT11_delay10us(void);
void DHT11_delay_ms(unsigned int ms);
char DHT11_Ready(void);
void DHT11_Start(void);
void DHT11_Over(void);
char DHT11_ReadBit(void);
void DHT11_Read(unsigned char *temp);

#endif