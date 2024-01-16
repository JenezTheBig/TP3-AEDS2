#ifndef MORSE_H
#define MORSE_H

#define MAX_LINE_LENGTH 240

typedef struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

typedef struct TreeNode2 {
    char value;
    struct TreeNode2* ponto;
    struct TreeNode2* barra;
} TreeNode2;

struct TreeNode* createNode(char data);
TreeNode2* createNode2(char value);
void insertNode(struct TreeNode** root, char data, const char* code);
void constroi1(TreeNode* root);
TreeNode2* Constroi2();
void freeTree(TreeNode2* root2);
void translateToText(struct TreeNode* root, const char* morseCode);
TreeNode2* traverseTree(TreeNode2* root2, char target, char* path, int level);
void getMorseCode(char character, char* morseCode);
char* readTextFile(const char* filename);
#endif
