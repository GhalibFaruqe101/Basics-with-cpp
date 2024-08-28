#include <iostream>
#include <vector>
using namespace std;

// Node structure
struct Node {
    int key;
    int value;
    Node* next;
    Node(int k, int v) : key(k), value(v), next(nullptr) {}
};

// LinkedList class
class linkedList {
private:
    Node* head;
public:
    linkedList() : head(nullptr) {}
    ~linkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Insert function
    void insert(int key, int value) {
        Node* current = head;
        while (current) {
            if (current->key == key) {
                current->value = value; // Update existing value
                return;
            }
            current = current->next;
        }
        Node* newNode = new Node(key, value);
        newNode->next = head;
        head = newNode;
    }

    // Print function
    void print() const {
        Node* current = head;
        while (current) {
            cout << "[" << current->key << "," << current->value << "]";
            current = current->next;
            if (current) cout << " -> ";
        }
    }
};

// HashTable class
class hashTable {
private:
    vector<linkedList> table;
    size_t tableSize;

    // Hash function
    size_t hashFunction(int key) {
        return key % tableSize;
    }

public:
    hashTable(size_t size) : table(size), tableSize(size) {}

    // Insert function
    void insert(int key, int value) {
        size_t index = hashFunction(key);
        table[index].insert(key, value);
    }

    // Print function
    void print() {
        for (size_t i = 0; i < tableSize; ++i) {
            cout << "Bucket " << i << ": ";
            table[i].print();
            cout << endl;
        }
    }
};

// Main function
int main() {
    hashTable ht(3);
    ht.insert(2, 200);
    ht.insert(3, 300);
    ht.insert(3, 400);
    ht.print();
    return 0;
}
