#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int item, Node* after_Node = NULL) {
   
    Node* node = new Node;
    node->data = item;

    if (after_Node == NULL) {
       
        node->next = head;
        head = node;
    } else {
        
        node->next = after_Node->next;
        after_Node->next = node;
    }
}

bool search(Node* head, int item) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == item) {
            return true; 
        }
        current = current->next;
    }
    return false; 
}

void deleteFromBeginning(Node*& head) {
    if (head == NULL) {
        return; 
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromMiddle(Node*& head, int key) {
    if (head == NULL) {
        return; 
    }
    Node* prev = NULL;
    Node* current = head;
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) {
        
        return;
    }
    if (prev == NULL) {
       
        head = head->next;
    } else {
        prev->next = current->next;
    }
    delete current;
}
void deleteFromEnd(Node*& head) {
    if (head == NULL) {
        return; 
    }
    if (head->next == NULL) {
        
        delete head;
        head = NULL;
        return;
    }
    Node* prev = NULL;
    Node* current = head;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    delete current;
    prev->next = NULL;
}




void display(Node* head) {
    
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* list = NULL;

   
    insert(list, 12);
    insert(list, 20);
     insert(list, 27);
    insert(list, 33);
    insert(list, 47);
    insert(list, 76);

   
    cout << "lInked list: ";
    display(list);

    cout<<"********************************************** Inserting ***************************************************"<<endl;

     
    insert(list, 5);
    cout << " 5 inserting at the beginning: ";
    display(list);

    
    Node* after_Node = list;
    while (after_Node != NULL && after_Node->data != 20) {
        after_Node = after_Node->next;
    }
    if (after_Node != NULL) {
        insert(list, 25, after_Node);
    }
    cout << "25 inserting after 20: ";
    display(list);

 cout<<"********************************************** Searching ***************************************************"<<endl;

     
    int searchItem = 47;
    if (search(list, searchItem)) {
        cout << " Searched item found in the linked list = " <<searchItem << endl;
    } else {
        cout <<  "Searched item not found in the linked list = " << searchItem <<endl;

    }

     cout<<"********************************************** deleting ***************************************************"<<endl;

    
    cout << "New linklist : ";
    display(list);

    
    deleteFromBeginning(list);
    cout << " Deleting at the beginning: ";
    display(list);

   
    deleteFromMiddle(list, 27);
    cout << " deleting at the middle: ";
    display(list);

   
    deleteFromEnd(list);
    cout << " Deleting atthe end: ";
    display(list);


   

    return 0;
}
