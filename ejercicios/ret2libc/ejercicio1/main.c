#include <stdint.h>

char* SH = "/bin/sh";

void help(){
    system("ls");
}

void do_nothing(){
    char input[120];
    printf("Do? ");
    gets(input);
    printf("Nothing...\n");
}

int main(int argc, char** argv) {
    do_nothing();
    return 0;
}