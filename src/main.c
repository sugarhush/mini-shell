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
        //exit command
        if (strcmp(buf, "exit")==0) {
            break;
        }
        //echo command
        else if(strncmp(buf, "echo",4)==0) {
            printf("%s\n",buf+5);
        }
        //type command
        else if(strncmp(buf, "type",4)==0) {
            if (
                strcmp(buf+5, "echo")==0 ||
                strcmp(buf+5, "exit")==0 ||
                strcmp(buf+5, "type")==0
            ) {
                    printf("%s is a shell builtin\n",buf+5);
            } else {
                    printf("%s: not found\n", buf+5);
            }

        }
        else {
            printf("%s: command not found\n", buf);
        }
    }
}
