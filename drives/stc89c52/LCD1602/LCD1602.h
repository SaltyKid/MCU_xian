/*******************************************************************************
 * Copyleft (c) 2020 SaltyKid 1035183478@qq.com
 *
 * 版权描述信息略
 *
 * @file    LCD1602.c
 * @brief   LCD1602 液晶显示模块C51驱动源码
 * @author  SaltyKid
 * @version 0.0.2
 * @date    2020-10-28
 * @license GNU General Public License (GPL)
 *
 * -----------------------------------------------------------------------------
 * Change History:
 *   <Date>      |  <Version>  |  <Author>  |  <Description>
 *   2020-08-27  |  v0.0.1     |  SaltyKid  |  Create file
 *   2020-10-28  |  v0.0.2     |  SaltyKid  |  Alter file
 * -----------------------------------------------------------------------------
 ******************************************************************************/

#ifndef __LCD1602_H__
#define __LCD1602_H__

/*=============================== 头文件包含 =================================*/
#include <REG52.H>
#include <intrins.h>

/*============================= 宏定义/重定义 ================================*/

#define LCD1602_SET 0x38       //< 显示模式设置
#define LCD1602_OFF 0x08       //< 显示关闭
#define LCD1602_CLE 0x01       //< 显示清屏
#define LCD1602_MV 0x06        //< 显示光标移动设置
#define LCD1602_ON 0x0c        //< 显示开及光标设置

#define DB P0                  //< 并行数据接口
sbit RS = P2^0;                //< 数据/命令选择接口
sbit RW = P2^1;                //< 读/写选择接口
sbit EN = P2^2;                //< 使能信号接口

/*================================ 接口函数 ==================================*/
void LCD1602_ready();
void write_cmd(unsigned char cmd);
void write_dat(unsigned char dis_dat);
void LCD1602_init();
unsigned char set_postion(unsigned char line, unsigned char row);
void dis_char(unsigned char line, unsigned char row, unsigned char dis_dat);
void dis_string(unsigned char line, unsigned char row, unsigned char *p);




#endif