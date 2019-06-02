#include <stdint.h>

void do_ls(){
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