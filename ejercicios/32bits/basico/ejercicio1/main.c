

void call_me() {
    printf("You cannot call me, noob!\n");
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