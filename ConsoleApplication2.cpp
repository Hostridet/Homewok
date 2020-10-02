
#include <iostream>
#include <stdio.h>

int main()
{
    char a;
    _asm
    {
        mov al, 1100b
        mov bh, 1010b
        add al, bh
        mov bh, 0
        mov cl, 10000b
        mov bl, 00001b
        shr cl, 5
        shl bl, 5
        xor al, cl
        xor al, bl
        mov cl, 010000b
        mov bl, 000010b
        shr cl, 5
        shl bl, 5
        xor al, bl
        xor al, cl
        mov a, al
    }
    printf("%d", a);
        getchar();
}


