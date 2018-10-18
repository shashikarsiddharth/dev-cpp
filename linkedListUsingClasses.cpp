// Implementation of single Linked List using classes

#include <bits/stdc++.h>
using namespace std;

class linkedListNode
{
  public:
    int item;
    linkedListNode *next, *prev;
};

class linkedList : public linkedListNode
{
  public:
    linkedListNode *head = NULL;

    void insertElementFront(int val)
    {
        linkedListNode *temp = new linkedListNode();
        temp->item = val;
        temp->next = head;
        head = temp;
    }

    void insertElementBack(int val)
    {
        linkedListNode *temp = new linkedListNode();
        linkedListNode *temp1 = new linkedListNode();
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp1->item = val;
        temp1->next = NULL;
        temp->next = temp1;
    }

    void deleteLastNode()
    {
        linkedListNode *temp = new linkedListNode();
        temp = head;

        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        delete (temp);
    }

    void deleteFirstNode()
    {
        linkedListNode *temp = new linkedListNode();
        temp = head->next;
        free(head);
        head = temp;
    }

    void deleteKey(int val)
    {
        linkedListNode *temp = new linkedListNode();
        temp = head;

        while (temp->next != NULL)
        {
            if (temp->item == val)
            {
                prev->next = temp->next;
                delete (temp);
            }
            prev = temp;
            temp = temp->next;
        }
    }
    int countElements()
    {
        linkedListNode *temp = new linkedListNode();
        int count = 0;

        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void printList()
    {
        linkedListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->item << "\n";
            temp = temp->next;
        }
    }
};

int main()
{
    linkedList n1;
    n1.insertElementFront(5);
    n1.insertElementFront(10);
    n1.insertElementFront(15);
    n1.insertElementFront(25);
    n1.insertElementFront(35);
    n1.insertElementBack(135);
    n1.insertElementBack(235);
    n1.insertElementBack(1535);
    n1.insertElementFront(5);
    n1.printList();

    cout << "\n";
    n1.deleteLastNode();
    n1.printList();

    cout << "\n";
    cout << n1.countElements() << endl;

    cout << "\n";
    n1.deleteFirstNode();
    n1.printList();

    cout << "\n";
    n1.deleteKey(15);
    n1.printList();

    return 0;
}