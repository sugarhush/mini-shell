#include <stdio.h>
#include <stdlib.h>
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
        //exit cmd
        if (strcmp(buf, "exit")==0) {
            exit(EXIT_SUCCESS);
        }
        else if(strncmp(buf, "echo",4)==0) {
            printf("%s",buf+5);
        }
        else {
            printf("%s: command not found\n", buf);
        }
    }
}
