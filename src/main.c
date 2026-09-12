#include <stdio.h>
#include <string.h>
int main() {
    printf("$ ");

    char buf[BUFSIZ];
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")]='\0';
    printf("%s: command not found\n", buf);
    return 0;
}
