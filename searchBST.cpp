#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root = NULL;

void createBST (int value) {

    struct Node* current, *parent;

    if (root == NULL){
        root = new Node(); // new Node();
        root -> data = value;
        root -> left = NULL;
        root -> right = NULL;
    }

    else{
        current = root;
        while(current != NULL){
            if (value < current -> data){
                parent = current;
                current = current -> left;
            }
            else if(value > current -> data){
                parent = current;
                current = current -> right;
            }
            else{
                cout<<"Dublicate Data!\n";
            }
        }

        if(value < parent->data){
            parent ->left = new Node();
            parent -> left -> data = value;
        }
        else if (value > parent-> data){
            parent ->right = new Node();
            parent -> right -> data = value;
        }
        else{
            return;
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

bool search(struct Node* root, int key) {
    while (root != NULL){
        if(key < root -> data){
            root = root -> left;
        }
        else if (key > root -> data){
            root = root -> right;
        }
        else {
            return true;
        }
    }
    return false;
}

bool deleteData(struct Node* root, int key){

    struct Node* parent, *current;
    
    current = root;
    
    while(current != NULL){
        if(key<current->data){
            parent = current;
            current = current->left;
        }
        else if(key>current->data){
            parent = current;
            current = current->right;
        }
        else{
            break;
        }
    }
    if ((current != NULL) && (current->left==NULL) && (current->right == NULL)){
        if(current->data > parent->data){
            parent-> right = NULL;
            current = NULL;
            free(current);
            return true;
        }
        if(current->data < parent->data){
            parent-> left= NULL;
            current = NULL;
            free(current);
            return true;
        }
    }
    return false;
}

int main(){

    createBST (60);
    createBST (55);
    createBST (100);
    createBST (45);
    createBST (57);
    createBST (67);
    createBST (107);
    createBST (59);
    createBST (101);

    inorder(root);
    cout<<"\n";

    bool searchResult = search(root, 60);
    cout<<"\n Searh Result is "<<searchResult<<endl;

    deleteData(root,45);
    inorder(root);
}