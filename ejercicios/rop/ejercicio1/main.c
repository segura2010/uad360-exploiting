#include <stdint.h>

char string[100] = "/bin/\0";
char sh[3] = "sh\0";

void execute_something(char* cmd){
    system(cmd);
}

void concat_something(char* s1, char* s2){
    strcat(s1, s2);
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