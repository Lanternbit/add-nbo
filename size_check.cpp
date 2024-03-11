// size-check.cpp
#include "add.h"

int size_check(FILE *fp) {
        fseek(fp, 0, SEEK_END);

        return ftell(fp);
}
