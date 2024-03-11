// main.cpp
#include "add.h"

int main(int argc, char* argv[]) {
        if (argc != 3) {
                printf("Number of argument is wrong!\n");
                return 0;
        }

        uint32_t f[1];
        uint32_t s[1];

        FILE *first = fopen(argv[1], "rb");
        FILE *second = fopen(argv[2], "rb");

        if(!first || !second) {
                printf("File open error!\n");
                return 0;
        }

        fread(f, sizeof(uint32_t), 1, first);
        fread(s, sizeof(uint32_t), 1, second);

        int size_f = size_check(first);
        int size_s = size_check(second);

        fclose(first);
        fclose(second);

        f[0] = correction(size_f, f[0]);
        s[0] = correction(size_s, s[0]);

        uint32_t result = add(f[0], s[0]);

        print_result(f[0], s[0], result);
}
