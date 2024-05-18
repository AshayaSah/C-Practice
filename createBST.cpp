#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root = NULL;

void createBST(int value){

    struct Node* current, *parent;

    if(root == NULL){
        root = (struct Node*)malloc(sizeof(struct Node));
        root->data = value;
        root->left=NULL;
        root->right=NULL;
    }
    else {
        current = root;
        while(current != NULL){
            if(value < current->data){
                parent = current;
                current = current -> left;
            }
            else if(value > current->data){
                parent = current;
                current = current -> right;
            }
            else{
                cout<<"Dublicate value"<<endl;
                return;
            }
        }

        if(value < parent->data){
            parent -> left = (struct Node*)malloc(sizeof(struct Node));
            parent -> left -> data = value;
        }
        else if(value > parent->data){
            parent -> right = (struct Node*)malloc(sizeof(struct Node));
            parent -> right -> data = value;
        }
    }
}

void inorder(struct Node* root){

    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    // struct Node* ptr=NULL;
        createBST(5);
        createBST(2);
        createBST(3);
        createBST(7);
        createBST(8);
        createBST(0);
        createBST(1);
        createBST(6);
        inorder(root); 
    
    return 0;
}