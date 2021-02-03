#include "aria.h"

void main() {
	byte p[16] = { 0x00 ,0x01 ,0x02 ,0x03 ,0x04 ,0x05 ,0x06 ,0x07 ,0x08 ,0x09 ,0x0a ,0x0b ,0x0c ,0x0d ,0x0e ,0x0f };
	byte t1[4];
	byte t2[4];
	byte t3[4];
	byte t4[4];
	memcpy(t1, p, 4);
	memcpy(t2, p + 4, 4);
	memcpy(t3, p + 8, 4);
	memcpy(t4, p + 12, 4);

	for (int i = 0; i < 4; i++)
		printf("%02x ", t1[i]);
	for (int i = 0; i < 4; i++)
		printf("%02x ", t2[i]);
	for (int i = 0; i < 4; i++)
		printf("%02x ", t3[i]);
	for (int i = 0; i < 4; i++)
		printf("%02x ", t4[i]);
}