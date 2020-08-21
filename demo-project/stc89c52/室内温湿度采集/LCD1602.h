#ifndef __LCD1602_H__
#define __LCD1602_H__

#include <REG52.H>
#include <intrins.h>

#define LCD1602_SET 0x38
#define LCD1602_OFF 0x08
#define LCD1602_CLE 0x01
#define LCD1602_MV 0x06
#define LCD1602_ON 0x0c
#define DB P0
sbit RS = P2^0;
sbit RW = P2^1;
sbit EN = P2^2;

void LCD1602_ready();
void write_cmd(unsigned char cmd);
void write_dat(unsigned char dis_dat);
void LCD1602_init();
unsigned char set_postion(unsigned char line, unsigned char row);
void dis_char(unsigned char line, unsigned char row, unsigned char dis_dat);
void dis_string(unsigned char line, unsigned char row, unsigned char *p);

#endif