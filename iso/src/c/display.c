#include "display.h"

char *fb = (char *) 0x000B8000;

void FrameBufferWriteCell(unsigned int i, char c, unsigned char color)
{
    fb[i] = c;
    fb[i + 1] = color;
}

void ClearScreen(unsigned char bg)
{
    for (int i = 0; i < 80 * 25; i++)
    {
        fb[i * 2] = ' ';
        fb[i * 2 + 1] = bg;
    }
}

void Write(char *buf, unsigned int len){
    for(unsigned int i = 0; i < len; i++){
        FrameBufferWriteCell(i * 2, buf[i], 0x0F);
    }
    
}
