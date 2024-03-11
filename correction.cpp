// correction.cpp
#include <netinet/in.h>
#include "add.h"

uint32_t correction(int size, uint32_t arr) {
        for (int i = 0; i < 4 - size; i++) {
                arr *= 256;
        }

        arr = htonl(arr);

        return arr;
}
