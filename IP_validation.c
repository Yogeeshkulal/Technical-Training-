#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isValidIPv4(char *ip) {
    int num, dots = 0;
    char *token = strtok(ip, ".");

    while (token) {
        if (sscanf(token, "%d", &num) != 1 || num < 0 || num > 255) return 0;
        if (token[0] == '0' && strlen(token) > 1) return 0; 
        dots++;
        token = strtok(NULL, ".");
    }

    return dots == 4;
}

int main() {
    char ip1[] = "222.111.111.111";
    char ip2[] = "5555..555";
    char ip3[] = "0.0.0.255";
    char ip4[] = "0.0.0.0255";

    printf("%s -> %s\n", ip1, isValidIPv4(ip1) ? "true" : "false");
    printf("%s -> %s\n", ip2, isValidIPv4(ip2) ? "true" : "false");
    printf("%s -> %s\n", ip3, isValidIPv4(ip3) ? "true" : "false");
    printf("%s -> %s\n", ip4, isValidIPv4(ip4) ? "true" : "false");

    return 0;
}
