#include <stdio.h>
#include <string.h>

//Function Declarations
void repl();

int main() {
    repl();
    return 0;
}

void repl() {
    while (1) {
        printf("$ ");

        char buf[BUFSIZ];
        fgets(buf, sizeof(buf), stdin);
        buf[strcspn(buf, "\n")]='\0';
        printf("%s: command not found\n", buf);
    }
}
