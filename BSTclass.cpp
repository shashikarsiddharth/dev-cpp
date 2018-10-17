// Implementing Binary Search Tree with multi-threading in cpp

#include <bits/stdc++.h>
#include <thread>

using namespace std;

class BST
{
  public:
    struct node
    {
        int key;
        node *left, *right;
    };

    node *root;

    node *newNode(int item)
    {
        node *temp = new node();
        temp->key = item;
        temp->left = NULL;
        temp->right = NULL;

        return temp;
    }

    node *insert(node *node, int key)
    {
        if (node == NULL)
            return newNode(key);

        if (key < node->key)
            node->left = insert(node->left, key);

        else if (key > node->key)
            node->right = insert(node->right, key);

        return node;
    }

    void inorder(node *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->key << endl;
            inorder(root->right);
        }
    }

    bool search(node *root, int key)
    {
        while (root != NULL)
        {
            if (key > root->key)
                root = root->right;

            else if (key < root->key)
                root = root->left;

            else
                return true;
        }
        return false;
    }

    BST()
    {
        root = NULL;
    }

    void display()
    {
        inorder(root);
    }

    void insert(int key)
    {
        root = insert(root, key);
    }

    void searchThread()
    {
        int key = 0;
        cout << "Enter the key to search\n"; 
        cin >> key;
            
        bool res = search(root,key);
        cout << res << endl;
    }

    void operator()(int x) 
    { 
        // for (int i = 0; i < x; i++) 
        //     cout << "Thread using function"
        //             " object as  callable\n";
        int key;
        cin >> key;
        bool res = search(root, key);
        cout << res << endl; 
    } 
};



int main()
{

    BST t;

    t.insert(50);
    t.insert(30);
    t.insert(20);
    t.insert(40);
    t.insert(70);
    t.insert(60);
    t.insert(80);

    // thread th1(&BST::searchThread,10);
    // th1.join(); 

    thread th2(BST(),10);
    th2.join();

    // t.searchThread();
    cout << "In-order traversal:\n";
    t.display();
    
    return 0;
}