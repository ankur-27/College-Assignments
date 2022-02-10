#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int n)
    {
        data = n;
        next = NULL;
    }
    ~node(){};
};

void InsertAtHead(node *&head, int n)
{
    node *new_node = new node(n);
    new_node->next = head;
    head = new_node;
}

void InsertAtTail(node *&head, int n)
{
    if (head == NULL)
    {
        InsertAtHead(head, n);
        return;
    }
    node *temp = head;
    node *new_node = new node(n);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void InsertAtPosition(node *&head, int n, int pos)
{
    if (pos <= 1 || head == NULL)
    {
        InsertAtHead(head, n);
        return;
    }
    node *temp = head;
    node *new_node = new node(n);
    int count = 2;
    while (count < pos)
    {
        if (temp->next == NULL)
            break;
        temp = temp->next;
        count++;
    }
    if (temp->next != NULL)
        new_node->next = temp->next;
    temp->next = new_node;
}

void DeleteAtHead(node *&head)
{
    if (head == NULL)
        return;
    node *temp = head;
    head = head->next;
    delete temp;
}

void DeleteAtPosition(node *&head, int pos)
{
    if (head == NULL || pos < 1)
        return;
    if (pos == 1)
    {
        DeleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 2;
    while (count < pos)
    {
        if (temp->next == NULL)
            return;
        temp = temp->next;
        count = count + 1;
    }
    if (temp->next == NULL)
        return;
    if (temp->next->next == NULL)
    {
        node *todelete = temp->next;
        temp->next = NULL;
        delete todelete;
    }
    else
    {
        node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
}

void DeleteAtTail(node *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        DeleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    node *todelete = temp->next;
    temp->next = NULL;
    delete todelete;
}

int search(node *head, int key)
{
    int count = 1;
    while (head != NULL)
    {
        if (head->data == key)
            return count;
        head = head->next;
        count++;
    }
    return INT32_MIN;
}

void reverse_linked_list(node *&head)
{
    if (head == NULL)
        return;
    node *pre = NULL;
    node *cur = head;
    node *nex = head->next;
    while (nex != NULL)
    {
        cur->next = pre;
        pre = cur;
        cur = nex;
        nex = nex->next;
    }
    cur->next = pre;
    head = cur;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int n, data, pos;
    node *head = NULL;

    while (1)
    {
        cout << "\n\n\t 1. To Insert a Node at the Beginning \n\t 2. To Insert a Node at a Particular Position \n\t 3. To Insert a Node at the End ";
        cout << "\n\t 4. To Delete a Node from the Beginning \n\t 5. To Delete a Node from a Particular Position \n\t 6. To Delete a Node from the End ";
        cout << "\n\t 7. To Search any Element in the Linked List \n\t 8. To Reverse the Linked List ";
        cout << "\n\t 9. To Display the Linked List \n\t10. To Exit";
        cout << "\nEnter your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter the Value : ";
            cin >> data;
            InsertAtHead(head, data);
            break;
        case 2:
            cout << "Enter the Value and Position at which you want to add : ";
            cin >> data >> pos;
            InsertAtPosition(head, data, pos);
            break;
        case 3:
            cout << "Enter the Value : ";
            cin >> data;
            InsertAtTail(head, data);
            break;
        case 4:
            DeleteAtHead(head);
            break;
        case 5:
            cout << "Enter the Position of element which you want to delete : ";
            cin >> pos;
            DeleteAtPosition(head, pos);
            break;
        case 6:
            DeleteAtTail(head);
            break;
        case 7:
            cout << "Enter the value of that element : ";
            cin >> data;
            pos = search(head, data);
            if (pos == INT32_MIN)
                cout << "Element was not found!";
            else
                cout << "Element was found at position " << pos << ".";
            break;
        case 8:
            reverse_linked_list(head);
            cout << "The Elements in the Linked List are :\n";
            display(head);
            break;
        case 9:
            cout << "The Elements in the Linked List are :\n";
            display(head);
            break;
        case 10:
            return 0;
            break;
        default:
            cout << "\nPlease enter Vaild Number.";
            break;
        }
    }
}