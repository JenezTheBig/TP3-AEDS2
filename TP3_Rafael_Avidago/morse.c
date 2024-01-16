#include "morse.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct TreeNode* createNode(char data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode2* createNode2(char value) {
    TreeNode2* newNode = (TreeNode2*)malloc(sizeof(TreeNode2));
    newNode->value = value;
    newNode->ponto = NULL;
    newNode->barra = NULL;
    return newNode;
}

void insertNode(struct TreeNode** root, char data, const char* code) {
    if (*root == NULL) {
        *root = createNode('\0');
    }
    struct TreeNode* currentNode = *root;
    int i = 0;
    while (code[i] != '\0') {
        if (code[i] == '.') {
            if (currentNode->left == NULL) {
                currentNode->left = createNode('\0');
            }
            currentNode = currentNode->left;
        } else if (code[i] == '-') {
            if (currentNode->right == NULL) {
                currentNode->right = createNode('\0');
            }
            currentNode = currentNode->right;
        }
        i++;
    }
    currentNode->data = data;
}

void constroi1(TreeNode* root){
        
        insertNode(&root, 'E', ".");
        insertNode(&root, 'T', "-");
        insertNode(&root, 'I', "..");
        insertNode(&root, 'A', ".-");
        insertNode(&root, 'N', "-.");
        insertNode(&root, 'M', "--");
        insertNode(&root, 'S', "...");
        insertNode(&root, 'U', "..-");
        insertNode(&root, 'R', ".-.");
        insertNode(&root, 'W', ".--");
        insertNode(&root, 'D', "-..");
        insertNode(&root, 'K', "-.-");
        insertNode(&root, 'G', "--.");
        insertNode(&root, 'O', "---");
        insertNode(&root, 'H', "....");
        insertNode(&root, 'V', "...-");
        insertNode(&root, 'F', "..-.");
        insertNode(&root, 'L', ".-..");
        insertNode(&root, 'P', ".--.");
        insertNode(&root, 'J', ".---");
        insertNode(&root, 'B', "-...");
        insertNode(&root, 'X', "-..-");
        insertNode(&root, 'C', "-.-.");
        insertNode(&root, 'Y', "-.--");
        insertNode(&root, 'Z', "--..");
        insertNode(&root, 'Q', "--.-");
        insertNode(&root, '5', ".....");
        insertNode(&root, '4', "....-");
        insertNode(&root, '3', "...--");
        insertNode(&root, '2', "..---");
        insertNode(&root, '1', ".----");
        insertNode(&root, '6', "-....");
        insertNode(&root, '+', ".-.-.");
        insertNode(&root, '7', "--...");
        insertNode(&root, '8', "---..");
        insertNode(&root, '9', "----.");
        insertNode(&root, '0', "-----");
}

TreeNode2* Constroi2() {
    TreeNode2* root2 = createNode2(' ');
    // nivel 1 
    root2->ponto = createNode2('E');
    root2->barra = createNode2('T');
    // nivel 2
    root2->ponto->ponto = createNode2('I');
    root2->ponto->barra = createNode2('A');
    root2->barra->ponto = createNode2('N');
    root2->barra->barra = createNode2('M');
    // nivel 3
    root2->ponto->ponto->ponto = createNode2('S');
    root2->ponto->ponto->barra = createNode2('U');
    root2->ponto->barra->ponto = createNode2('R');
    root2->ponto->barra->barra = createNode2('W');
    root2->barra->ponto->ponto = createNode2('D');
    root2->barra->ponto->barra = createNode2('K');
    root2->barra->barra->ponto = createNode2('G');
    root2->barra->barra->barra = createNode2('O');
    // nivel 4
    root2->ponto->ponto->ponto->ponto = createNode2('H');
    root2->ponto->ponto->ponto->barra = createNode2('V');
    root2->ponto->ponto->barra->ponto = createNode2('F');
    root2->ponto->ponto->barra->barra = createNode2(' ');
    root2->ponto->barra->ponto->ponto = createNode2('L');
    root2->ponto->barra->ponto->barra = createNode2(' ');
    root2->ponto->barra->barra->ponto = createNode2('P');
    root2->ponto->barra->barra->barra = createNode2('J');
    root2->barra->ponto->ponto->ponto = createNode2('B');
    root2->barra->ponto->ponto->barra = createNode2('X');
    root2->barra->ponto->barra->ponto = createNode2('C');
    root2->barra->ponto->barra->barra = createNode2('Y');
    root2->barra->barra->ponto->ponto = createNode2('Z');
    root2->barra->barra->ponto->barra = createNode2('Q');
    root2->barra->barra->barra->ponto = createNode2(' ');
    root2->barra->barra->barra->barra = createNode2(' ');

    //nivel5 NAOMEREPROVAPORFALTA PF.EXE
    root2->ponto->ponto->ponto->ponto->ponto = createNode2('5');
    root2->ponto->ponto->ponto->ponto->barra = createNode2('4');
    root2->ponto->ponto->ponto->barra->ponto = createNode2(' ');
    root2->ponto->ponto->ponto->barra->barra = createNode2('3');
    root2->ponto->ponto->barra->ponto->ponto = createNode2(' ');
    root2->ponto->ponto->barra->ponto->barra = createNode2(' ');
    root2->ponto->ponto->barra->barra->ponto = createNode2(' ');
    root2->ponto->ponto->barra->barra->barra = createNode2('2');
    root2->ponto->barra->ponto->ponto->ponto = createNode2(' ');
    root2->ponto->barra->ponto->ponto->barra = createNode2(' ');
    root2->ponto->barra->ponto->barra->ponto = createNode2('+');
    root2->ponto->barra->ponto->barra->barra = createNode2(' ');
    root2->ponto->barra->barra->ponto->ponto = createNode2(' ');
    root2->ponto->barra->barra->ponto->barra = createNode2(' ');
    root2->ponto->barra->barra->barra->ponto = createNode2(' ');
    root2->ponto->barra->barra->barra->barra = createNode2('1');

    root2->barra->ponto->ponto->ponto->ponto = createNode2('6');
    root2->barra->ponto->ponto->ponto->barra = createNode2('=');
    root2->barra->ponto->ponto->barra->ponto = createNode2('/');
    root2->barra->ponto->ponto->barra->barra = createNode2(' ');
    root2->barra->ponto->barra->ponto->ponto = createNode2(' ');
    root2->barra->ponto->barra->ponto->barra = createNode2(' ');    
    root2->barra->ponto->barra->barra->ponto = createNode2(' ');
    root2->barra->ponto->barra->barra->barra = createNode2(' ');
    root2->barra->barra->ponto->ponto->ponto = createNode2('7');
    root2->barra->barra->ponto->ponto->barra = createNode2(' ');
    root2->barra->barra->ponto->barra->ponto = createNode2(' ');
    root2->barra->barra->ponto->barra->barra = createNode2(' ');
    root2->barra->barra->barra->ponto->ponto = createNode2('8');
    root2->barra->barra->barra->ponto->barra = createNode2(' ');
    root2->barra->barra->barra->barra->ponto = createNode2('9');
    root2->barra->barra->barra->barra->barra = createNode2('0');

    return root2;
}

void freeTree(TreeNode2* root2) {
    if (root2 == NULL)
        return;
    freeTree(root2->ponto);
    freeTree(root2->barra);
    free(root2);
}

void translateToText(struct TreeNode* root, const char* morseCode) {
    int i = 0;
    while (morseCode[i] != '\0') {
        if (morseCode[i] == '/') {
            printf(" ");
        } else {
            struct TreeNode* temp = root;
            while (morseCode[i] != ' ' && morseCode[i] != '\0') {
                if (morseCode[i] == '.') {
                    temp = temp->left;
                } else if (morseCode[i] == '-') {
                    temp = temp->right;
                }
                i++;
            }
            if (temp == NULL) {
                printf("Invalid Morse code: %s\n", morseCode);
                return;
            }
            printf("%c", temp->data);
        }
        i++;
    }
}

TreeNode2* traverseTree(TreeNode2* root2, char target, char* path, int level) {
    if (root2 == NULL)
        return NULL;

    if (root2->value == target) {
        path[level] = '\0';
        return root2;
    }

    path[level] = '.';
    TreeNode2* node = traverseTree(root2->ponto, target, path, level + 1);
    if (node != NULL)
        return node;

    path[level] = '-';
    node = traverseTree(root2->barra, target, path, level + 1);
    if (node != NULL)
        return node;

    path[level] = '\0';
    return NULL;
}

void getMorseCode(char character, char* morseCode) {
    TreeNode2* root2 = Constroi2();
    char path[10];
    TreeNode2* node = traverseTree(root2, character, path, 0);
    if (node != NULL)
        strcpy(morseCode, path);
    else
        morseCode[0] = '\0';
    freeTree(root2);
}
//funçao para ler o arquivo
char* readTextFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* content = (char*)malloc((fileSize + 1) * sizeof(char));  
    fread(content, sizeof(char), fileSize, file);
    content[fileSize] = '\0';

    fclose(file);

    return content;
}