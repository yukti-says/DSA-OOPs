#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;   
} treenode;

// Function to create a new tree node
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

// Inorder Traversal (Left, Root, Right)
void inorder(treenode *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Preorder Traversal (Root, Left, Right)
void preorder(treenode *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(treenode *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
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
    leftchild->left = leftchild2;
    leftchild->right = rightchild2;

    // Traversals
    printf("In-order traversal: ");
    inorder(root);
    
    printf("\nPre-order traversal: ");
    preorder(root);
    
    printf("\nPost-order traversal: ");
    postorder(root);

    // Free allocated memory
    free(root);
    free(leftchild);
    free(rightchild);
    free(leftchild2);
    free(rightchild2);

    return 0;
}
