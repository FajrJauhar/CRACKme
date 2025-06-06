#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }

    char *secret = "ZmxhZ3tTSU1QTEVfUkVfQkFTSUNfU0NfUkVfMTIzfQ==";  // base64-encoded flag
    char pass[] = {102, 97, 106, 114, 95, 49, 56, 55, 120, 120, 0};  // "fajr_187xx"

    if (strcmp(argv[1], pass) == 0) {
        printf("Access granted.\n");
        printf("Here is your reward: %s\n", secret);
    } else {
        printf("Access denied.\n");
        return 1;
    }

    return 0;
}
