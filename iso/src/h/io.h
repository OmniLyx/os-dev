#ifndef INCLUDE_IO_H
#define INCLUDE_IO_H



 /** outb:
     *  Sends the given data to the given I/O port. Defined in io.s
     *
     *  @param port The I/O port to send the data to
     *  @param data The data to send to the I/O port
     */

void OutB(unsigned short port, unsigned char data);

/** fb_move_cursor:
 * 
 * @param pos The new position of the cursor
 */


void FrameBufferMoveCursor(unsigned short pos);


#endif /* INCLUDE_IO_H */