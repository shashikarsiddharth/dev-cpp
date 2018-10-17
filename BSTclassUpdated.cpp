#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int key;
    Node *left, *right;
};

class Tree : public Node
{
  public:
    Node *root;

    Node *newNode(int item)
    {
        Node *temp = new Node();
        temp->key = item;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    Node *insertNode(Node *root, int val)
    {
        if (root == NULL)
            return newNode(val);

        else if (val < root->key)
            root->left = insertNode(root->left, val);

        else
            root->right = insertNode(root->right, val);

        return root;
    }

    void inorder(Node *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->key << endl;
            inorder(root->right);
        }
    }

    bool search(Node *root, int item)
    {
        while (root != NULL)
        {
            if (item > root->key)
                root = root->right;

            else if (item < root->key)
                root = root->left;

            else
                return true;
        }
        return false;
    }
};

int main()
{

    Tree t;
    int item;
    int res = 0;

    t.root = t.newNode(10);
    t.insertNode(t.root, 40);
    t.insertNode(t.root, 30);
    t.insertNode(t.root, 50);
    t.insertNode(t.root, 20);
    t.inorder(t.root);

    cin >> item;

    // thread th1(t.search, t.root, item);
    // th1.join();

    res = t.search(t.root, item);
    cout << res << endl;
    return 0;
}