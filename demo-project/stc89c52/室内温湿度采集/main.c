#include "DHT11.h"
#include "Delay.h"
#include "LCD1602.h"
#include <REG52.H>

void main()
{
    unsigned char str_rh[15] = {'s', 'h', 'i', 'd', 'u', ':', 0x30, 0x30, '.', 0x30, 0x30, '%', 'R', 'H', '\0'};
    unsigned char str_th[14] = {'w', 'e', 'n', 'd', 'u', ':', 0x30, 0x30, '.', 0x30, 0x30, 0xdf, 'C', '\0'};
    unsigned char dat[5] = {0};
    LCD1602_init();
    delay_ms(1000);

    while (1)
    {
        DHT11_Read(dat);
        str_rh[6] = dat[0] / 10 +0x30;
        str_rh[7] = dat[0] % 10  +0x30;
        str_rh[9] = dat[1] / 10  +0x30;
        str_rh[10] = dat[1] % 10  +0x30;
        str_th[6] = dat[2] / 10  +0x30;
        str_th[7] = dat[2] % 10  +0x30;
        str_th[9] = dat[3] / 10  +0x30;
        str_th[10] = dat[3] % 10  +0x30;
        dis_string(0, 0, str_rh);
        dis_string(1, 0, str_th);
        delay_ms(1000);
    }
}
