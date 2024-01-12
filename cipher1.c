#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarEncrypt(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        if (isalpha(message[i])) { 
            if (isupper(message[i])) { 
                message[i] = (message[i] - 'A' + shift) % 26 + 'A'; 
            } else { 
                message[i] = (message[i] - 'a' + shift) % 26 + 'a';
            }
        }
    }
}

void printMessage(char message[]) {
    printf("Message: %s", message);
}

int main() {
    char message[100];
    int shift;

    printf("Enter a message to encrypt:\n");
    gets(message);

    printf("Enter the shift value:\n");
    scanf("%d", &shift);

    caesarEncrypt(message, shift);
    printMessage(message);


    return 0;
}