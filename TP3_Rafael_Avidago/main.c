#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include "morse.h"


int main() {

    int option;
    printf("Selecione uma opcao:\n");
    printf("1 - Traduzir de Morse para Texto\n");
    printf("2 - Traduzir de Texto para Morse\n");
    printf("Opcao: ");
    scanf("%d", &option);
    getchar(); 

    if (option == 1) {
        struct TreeNode* root = createNode('\0');
        constroi1(root);

        char morseCode[100];
        printf("Digite o código Morse: ");
        fgets(morseCode, sizeof(morseCode), stdin);
        morseCode[strcspn(morseCode, "\n")] = '\0'; 

        printf("Tradução: ");
        translateToText(root, morseCode);
    } else if (option == 2) {
        char* character = readTextFile("msg.txt");

        char morseCode[10];
        int previousSpace = 0;

        for (int i = 0; i < strlen(character); i++) {
            if (character[i] != ' ') {
                getMorseCode(character[i], morseCode);

                if (previousSpace) {
                    printf("/ ");
                    previousSpace = 0;
                }
                printf("%s ", morseCode);
            } else {
                previousSpace = 1;
            }

            if (character[i] == '\n') {
                printf("\n\n");
            }
        }

        free(character);

        return 0;
    } else {
        printf("Opcao invalida.\n");
    }
    
    printf("\n");
    return 0;

}
