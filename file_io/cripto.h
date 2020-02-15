#ifndef CRIPT_H
#define CRIPT_H

typedef char byte;

extern byte cipher(byte message, byte key);
extern byte decipher(byte cipher, byte key);

#endif