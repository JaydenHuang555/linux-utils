#include "stdio.h"
#include "ctype.h"
#include "string.h"
#include "stdarg.h"

int main(int argc, char **argv) {
	char target[1 << 4];
	for(int i = 0; i < 128; i++) {
    memset(target, 0, sizeof(target));
		char c = i;
		if(isprint(c)) {
      *target = c;
		}
    else {
      switch(c) {
        case 0:
          sprintf(target, "NULL");
          break;
        case 1:
          sprintf(target, "SOH");
          break;
        case 2:
          sprintf(target, "STX");
          break;
        case 3:
          sprintf(target, "ETX");
          break;
        case 4:
          sprintf(target, "EOT");
          break;
        case 5:
          sprintf(target, "ENQ");
          break;
        case 6:
          sprintf(target, "ACK");
          break;
        case 7:
          sprintf(target, "BEL");
          break;
        case 8:
          sprintf(target, "BS");
          break;
        case 9:
          sprintf(target, "HT");
          break;
        case 10:
          sprintf(target, "LF");
          break;
        case 11:
          sprintf(target, "VT");
          break;
        case 12:
          sprintf(target, "FF");
          break;
        case 13:
          sprintf(target, "CR");
          break;
        case 14:
          sprintf(target, "SO");
          break;
        case 15:
          sprintf(target, "SI");
          break;
        case 16:
          sprintf(target, "DLE");
          break;
        case 17:
          sprintf(target, "DC1");
          break;
        case 18:
          sprintf(target, "DC2");
          break;
        case 19:
          sprintf(target, "DC3");
          break;
        case 20:
          sprintf(target, "DC4");
          break;
        case 21:
          sprintf(target, "NAK");
          break;
        case 22:
          sprintf(target, "SYN");
          break;
        case 23:
          sprintf(target, "ETB");
          break;
        case 24:
          sprintf(target, "CAN");
          break;
        case 25:
          sprintf(target, "EM");
          break;
        case 26:
          sprintf(target, "SUB");
          break;
        case 27:
          sprintf(target, "ESC");
          break;
        case 28:
          sprintf(target, "FS");
          break;
        case 29:
          sprintf(target, "GS");
          break;
				case 30:
					sprintf(target, "RS");
					break;
				case 31:
					sprintf(target, "US");
					break;
				case 32:
					sprintf(target, "SPACE \'\'");
					break;
				case 127:
					sprintf(target, "DEL (<-)");
					break;
        default:
          sprintf(target, "not found");
      }
    }

    printf("%d: %s\n", i, target);
	}
	
	return 0;
}
