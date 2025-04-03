
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Creating a node
struct node *createnode(int value) {
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Inserting into BST
struct node* insert(struct node *root, int value) {
    if(root == NULL) {
        return createnode(value);
    }

    // For left subtree
    if(value < root->data) {
       root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }
    return root;
}

/*
// Searching in a BST
struct node* search(struct node *root, int key) {
    if(root == NULL || root->data == key) {
        return root;
    }

    if(key < root->data) {
        return search(root->left, key);
    }
    else {
        return search(root->right, key);
    }
}
*/

bool find(struct node *root , int key)
{

    if(root ==NULL){
        return false;
    }
    if(root->data == key)
    {
        return true;
    }
    if(key < root->data)

    {
        return find(root->left , key);
    }
    else
    {
        return find(root->right , key);
    }
}

// Inorder Traversal
void inorder(struct node *root) {
   if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
   }
}

// Function to free memory
void freeTree(struct node *root) {
    if(root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    struct node *root = NULL;  // Initialize root as NULL

    root = insert(root, 12);
    root = insert(root, 11);
    root = insert(root, 90);
    root = insert(root, 30);
    root = insert(root, 9);
    root = insert(root, 34);
    root = insert(root, 78);
    root = insert(root, 900);





    printf("Tree traversal is: ");
    inorder(root);
    printf("\n");
    /*
    int key;
    printf("Enter the key/value you want to search in tree: ");
    scanf("%d", &key);

    struct node *result = search(root, key);
    if(result != NULL) {
        printf("Key %d found in the tree.\n", key);
    } else {
        printf("Key %d not found in the tree.\n", key);
    }
     */

     printf("%d (%d)\n ", 16 , find(root , 16)); // 0  means not in tree

     printf("%d (%d)\n ", 160 , find(root , 160));

     printf("%d (%d)\n ", 1 , find(root , 1));

     printf("%d (%d)\n ", 12 , find(root , 12)); // 1 means in tree

     printf("%d (%d)\n ", 900 , find(root , 900));
    // Free memory
    freeTree(root);

    return 0;
}
