// Implementing Binary Search Tree with multi-threading in cpp 

#include <bits/stdc++.h>
#include <thread>

using namespace std;
struct node *root = NULL;
    
struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode (int item)
{
    struct node *temp = new node();
    temp -> key = item;
    temp -> left = NULL;
    temp -> right = NULL;

    return temp;
}

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root -> left);
        cout << root -> key << endl;
        inorder(root->right);
    }
}

struct node* insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    
    if (key < node->key)
        node -> left = insert(node->left, key);

    else if (key > node->key)
        node -> right = insert(node->right, key);

    return node;
}

bool search(struct node *root, int key)
{
    while(root != NULL)
    {
        if (key > root->key)
            root = root -> right;

        else if(key < root->key)
            root = root -> left;
    
        else
            return true;
    }
    return false;
} 

void searchThread()
{
    int key = 0;
    cout << "Enter the key to search\n"; 
    cin >> key;
    
    bool res = search(root,key);
    cout << res << endl;
}

int main()
{
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    thread th1(searchThread);
    th1.join();
    
    cout << "In-order traversal:\n";
    inorder(root);
    return 0;   
}