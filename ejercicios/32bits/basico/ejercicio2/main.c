#include <stdint.h>

void call_me(int32_t a, int32_t b, int32_t c) {
	if(a == 0x11223344 && b == 0x55667788 && c == 0x11335577)
	{
    	printf("You cannot call me, noob!\n");
    }
}

void try_to_call_me(){
    char input[120];
    printf("Call ");
    gets(input);
    printf("Maybe...\n");
}

int main(int argc, char** argv) {
    try_to_call_me();
    return 0;
}