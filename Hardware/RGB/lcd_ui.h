#ifndef _LCD_UI_H__
#define _LCD_UI_H__

#include "gd32f4xx.h"

//������ɫ
#define WHITE         	 0xFFFF
#define BLACK         	 0x0000	  
#define BLUE         	 0x001F  
#define BRED             0XF81F
#define GRED 			 0XFFE0
#define GBLUE			 0X07FF
#define RED           	 0xF800
#define MAGENTA       	 0xF81F
#define GREEN         	 0x07E0
#define CYAN          	 0x7FFF
#define YELLOW        	 0xFFE0
#define BROWN 			 0XBC40 //��ɫ
#define BRRED 			 0XFC07 //�غ�ɫ
#define GRAY  			 0X8430 //��ɫ
//GUI��ɫ

#define DARKBLUE      	 0X01CF	//����ɫ
#define LIGHTBLUE      	 0X7D7C	//ǳ��ɫ  
#define GRAYBLUE       	 0X5458 //����ɫ
//������ɫΪPANEL����ɫ 
 
#define LIGHTGREEN     	 0X841F //ǳ��ɫ
//#define LIGHTGRAY        0XEF5B //ǳ��ɫ(PANNEL)
#define LGRAY 			 0XC618 //ǳ��ɫ(PANNEL),���屳��ɫ

#define LGRAYBLUE        0XA651 //ǳ����ɫ(�м����ɫ)
#define LBBLUE           0X2B12 //ǳ����ɫ(ѡ����Ŀ�ķ�ɫ)


//����
void tli_draw_point(uint16_t x,uint16_t y,uint16_t color);	
//����
void tli_draw_line(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey,uint16_t color);
//������
void tli_draw_Rectangle(uint16_t sx,uint16_t sy,uint16_t ex,uint16_t ey,uint16_t color, uint16_t fill);
//��Բ
void tli_draw_circle(int xc, int yc,uint16_t c,int r, int fill);
//��������
void tli_draw_triange(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2, uint16_t color,uint16_t fill);
//��һ����Ŵ�
void point_enlargement(uint16_t x, uint16_t y, uint16_t color, char magnify);
//��ʾ�����ַ�
void tli_show_char(uint16_t x,uint16_t y,uint16_t fc, uint16_t bc, uint8_t num,uint8_t size,uint8_t mode);
//��ʾ�ַ���
void tli_show_string(uint16_t x,uint16_t y,uint16_t fc,uint16_t bc,uint8_t size,uint8_t *p,uint8_t mode);
//��ʾ����16*16��С������
void tli_show_font16(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
//��ʾ����24*24��С������
void tli_show_font24(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
//��ʾ����32*32��С������
void tli_show_font32(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
//��ʾ�����ַ���
void tli_show_Chinese_string(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *str,uint8_t size,uint8_t mode);

void tli_show_picture(uint16_t x,uint16_t y,uint16_t w, uint16_t h,const unsigned char pic[]); //��ʾ40*40 QQͼƬ
#endif
