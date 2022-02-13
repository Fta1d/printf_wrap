#include <iostream>
#include <cstring>
#include <stdlib.h>

#define BUFFSIZE 5

void myout(char *str);

int main() {
    char str[] = "Hello asd  G\n";

    myout(str);

    return 0;
}

void myout(char *str) {
    bool flag = 0;
    int_fast8_t count = 0;
    int_fast16_t i = 0;
    unsigned char *buff = new unsigned char[BUFFSIZE];

    for ( ; i <= strlen(str); ) {
        if (count == BUFFSIZE || (flag = i == strlen(str))) {
            printf("%s", buff);

            count = 0;

            if (flag)
                break;

        } else
            buff[count++] = str[i++];

        buff[count] = '\0';
    }

    delete[] buff;
}
