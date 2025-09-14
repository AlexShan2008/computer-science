#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%.2x ", start[i]);
    }
    printf("\n");
}

int main() {
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;

    printf("Byte representation of 0x87654321:\n");
    printf("1 byte: ");
    show_bytes(valp, 1);
    printf("2 bytes: ");
    show_bytes(valp, 2);
    printf("3 bytes: ");
    show_bytes(valp, 3);
    printf("4 bytes: ");
    show_bytes(valp, 4);

    return 0;
}
