#include <stdio.h>
#include <stdlib.h> //for malloc and free functions

typedef struct treenode {
    int data;
    struct treenode *left;
    struct treenode *right;
} treenode; //defined a struct variable for treenode

// Function to create a tree node with a given value
treenode *createnode(int value) {
    treenode *newnode = malloc(sizeof(treenode)); // Allocate memory
    if (newnode == NULL) { // If memory allocation fails
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    newnode->left = NULL; // Left child is null
    newnode->right = NULL; // Right child is null
    newnode->data = value; // Assign data
    
    return newnode; // Return the new node
}

// Function to create indentation (tabs) for tree visualization
void tabs(int numtab) {
    for (int i = 0; i < numtab; i++) {
        printf("\t");
    }
}

// Function to print the tree in a structured way
void tree(treenode *root, int level) {
    if (root == NULL) {   
        tabs(level);
        printf("<--empty-->\n");
        return;
    }

    tabs(level);
    printf("%d\n", root->data);
    
    tabs(level);
    printf("left:\n");
    tree(root->left, level + 1);
    
    tabs(level);
    printf("right:\n");
    tree(root->right, level + 1);
}

// Function to print the tree starting from the root
void print(treenode *root) {
    tree(root, 0);
}

int main() {
    // Creating tree nodes
    treenode *root = createnode(10);
    treenode *leftchild = createnode(5);
    treenode *rightchild = createnode(15);
    treenode *leftchild2 = createnode(3);
    treenode *rightchild2 = createnode(7);
    
    // Linking the tree
    root->left = leftchild;
    root->right = rightchild;
    rightchild->left = leftchild2;
    rightchild->right = rightchild2;

    // Print tree
    print(root);

    // Freeing allocated memory
    free(root);
    free(leftchild);
    free(rightchild);
    free(leftchild2);
    free(rightchild2);

    return 0;
}
