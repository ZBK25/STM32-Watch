#ifndef __OLED_H__
#define __OLED_H__

#include "main.h"
#include "font.h"
#include "string.h"

typedef enum {
    OLED_COLOR_NORMAL = 0, //正常模式 黑底白字
    OLED_COLOR_REVERSED     //反色模式 白底黑字
} OLED_ColorMode;

void OLED_Send(uint8_t *data,uint16_t len);
void OLED_SendCmd(uint8_t cmd);

void OLED_Init(void);
void OLED_DisPlay_On(void);
void OLED_DisPaly_Off(void);

void OLED_SetColorMode(OLED_ColorMode mode);
void OLED_NewFrame(void);
void OLED_ShowFrame(void);

void OLED_SetPixel(uint8_t x,uint8_t y,OLED_ColorMode color);
void OLED_SetByte_Fine(uint8_t page,uint8_t column,uint8_t data,uint8_t start,uint8_t end,OLED_ColorMode color);
void OLED_SetByte(uint8_t page,uint8_t column,uint8_t data,OLED_ColorMode color);
void OLED_SetBits_Fine(uint8_t x,uint8_t y,uint8_t data,uint8_t len,OLED_ColorMode color);
void OLED_SetBits(uint8_t x,uint8_t y,uint8_t data,OLED_ColorMode color);
void OLED_SetBlock(uint8_t x,uint8_t y,const uint8_t *data,uint8_t w,uint8_t h,OLED_ColorMode color);

void OLED_DrawLine_my(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,OLED_ColorMode color);
void OLED_DramLine(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,OLED_ColorMode color);
void OLED_DrawRectangle(uint8_t x, uint8_t y, uint8_t w, uint8_t h, OLED_ColorMode color);
void OLED_DrawFilledRectangle(uint8_t x, uint8_t y, uint8_t w, uint8_t h, OLED_ColorMode color);
void OLED_DrawTriangle(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t x3,uint8_t y3,OLED_ColorMode color);
void OLED_DrawFilledTriangle_my(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t x3,uint8_t y3,OLED_ColorMode color);
void OLED_DrawFilledTriangle(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t x3,uint8_t y3,OLED_ColorMode color);
void OLED_DrawCircle_my(uint8_t x, uint8_t y, uint8_t r, OLED_ColorMode color);
void OLED_DrawCircle(uint8_t x, uint8_t y, uint8_t r, OLED_ColorMode color);
void OLED_DrawFilledCircle(uint8_t x, uint8_t y, uint8_t r, OLED_ColorMode color);
void OLED_DrawEllipse_my(uint8_t x, uint8_t y, uint8_t a, uint8_t b, OLED_ColorMode color);
void OLED_DrawImage(uint8_t x, uint8_t y, const Image *img, OLED_ColorMode color);

void OLED_PrintASCIIChar(uint8_t x, uint8_t y, char ch, const ASCIIFont *font, OLED_ColorMode color);
void OLED_PrintASCIIString(uint8_t x, uint8_t y, char *str, const ASCIIFont *font, OLED_ColorMode color);
void OLED_PrintString(uint8_t x, uint8_t y, char *str, const Font *font, OLED_ColorMode color);
void OLED_PrintInt(uint8_t x, uint8_t y, int32_t num, const ASCIIFont *font, OLED_ColorMode color);

#endif
