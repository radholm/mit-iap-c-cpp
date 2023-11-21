#include <stdio.h>

int main(int argc, char ** argv){
    if (argc > 0) {
        int pointer = 0;
loop:
        pointer++;
        if (pointer == argc) {
          goto end;
        }
        if (pointer > 0) {
            printf("%s\n", argv[pointer]);
            goto loop;
        }
    }
end:
    return 0;
}
