#include <iostream>

using namespace std;

// -----------------------------intro Linked List-----------------------------
// Imagine you have a chain made up of individual links. Each link contains two parts: one part holds some data, and the other part points to the next link in the chain. This is similar to how linked lists work in C++.

// In a linked list, each element is called a node. Each node has two parts: data and a pointer. The data part holds the information you want to store, such as a number or a string. The pointer part points to the next node in the list.

// struct Node
// {
//     int data;
//     Node *next;
// };

// -----------------------------doubly linked list ----------------------------
// Certainly! A doubly linked list is similar to a linked list, but with an extra pointer in each node. In addition to the next pointer, a doubly linked list also has a previous pointer that points to the previous node in the list.
// struct Node
// {
//     int data;
//     Node *previous;
//     Node *next;
// };

// -----------------------------Circular Linked List-------------------------------
// Certainly! A circular linked list is a variation of a linked list where the last node of the list points back to the first node, creating a circular structure. This means that there is no "end" of the list like in a regular linked list.

/// struct Node {
//     int data;
//     Node* next;
// };

// ----------------------------implementing stack using linked list ----------------
// struct Node {
//     int data;
//     Node* next;
// };
// class Stack {
// private:
//     Node* top;

// public:
//     // Constructor
//     Stack() : top(nullptr) {}

//     // Destructor
//     ~Stack() {
//         // Clean up memory by deleting all nodes
//         Node* currentNode = top;
//         while (currentNode != nullptr) {
//             Node* temp = currentNode;
//             currentNode = currentNode->next;
//             delete temp;
//         }
//     }

//     // Push operation to add an element to the top of the stack
//     void push(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode;
//     }

//     // Pop operation to remove and return the element from the top of the stack
//     int pop() {
//         if (isEmpty()) {
//             std::cout << "Stack is empty!" << std::endl;
//             return -1;  // Or throw an exception
//         }

//         Node* poppedNode = top;
//         int poppedValue = poppedNode->data;
//         top = top->next;
//         delete poppedNode;

//         return poppedValue;
//     }

//     // Check if the stack is empty
//     bool isEmpty() {
//         return top == nullptr;
//     }

//     // Get the top element without removing it from the stack
//     int peek() {
//         if (isEmpty()) {
//             std::cout << "Stack is empty!" << std::endl;
//             return -1;  // Or throw an exception
//         }

//         return top->data;
//     }
// };

// ----------------implementing queue using Linked List ----------------------
// struct Node {
//     int data;
//     Node* next;
// };

// // Define the queue class
// class Queue {
// private:
//     Node* front;
//     Node* rear;

// public:
//     // Constructor
//     Queue() : front(nullptr), rear(nullptr) {}

//     // Destructor
//     ~Queue() {
//         // Clean up memory by deleting all nodes
//         Node* currentNode = front;
//         while (currentNode != nullptr) {
//             Node* temp = currentNode;
//             currentNode = currentNode->next;
//             delete temp;
//         }
//     }

//     // Enqueue operation to add an element to the back of the queue
//     void enqueue(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = nullptr;

//         if (isEmpty()) {
//             front = rear = newNode;
//         } else {
//             rear->next = newNode;
//             rear = newNode;
//         }
//     }

//     // Dequeue operation to remove and return the element from the front of the queue
//     int dequeue() {
//         if (isEmpty()) {
//             std::cout << "Queue is empty!" << std::endl;
//             return -1;  // Or throw an exception
//         }

//         Node* dequeuedNode = front;
//         int dequeuedValue = dequeuedNode->data;

//         front = front->next;
//         delete dequeuedNode;

//         // Check if the queue becomes empty after dequeue
//         if (front == nullptr) {
//             rear = nullptr;
//         }

//         return dequeuedValue;
//     }

//     // Check if the queue is empty
//     bool isEmpty() {
//         return front == nullptr;
//     }

//     // Get the front element without removing it from the queue
//     int peek() {
//         if (isEmpty()) {
//             std::cout << "Queue is empty!" << std::endl;
//             return -1;  // Or throw an exception
//         }

//         return front->data;
//     }
// };

int main()
{
    // --------------------Linked List--------------------------
    // Node *firstNode = new Node();
    // Node *secondNode = new Node();
    // Node *thirdNode = new Node();

    // // Assign data to each node
    // firstNode->data = 1;
    // secondNode->data = 2;
    // thirdNode->data = 3;

    // // Link the nodes together
    // firstNode->next = secondNode;
    // secondNode->next = thirdNode;
    // thirdNode->next = nullptr; // Marks the end of the list

    // // Traverse the linked list and print the data
    // Node *currentNode = firstNode;
    // while (currentNode != nullptr)
    // {
    //     cout << currentNode->data << " ";
    //     currentNode = currentNode->next;
    // }

    // // Clean up memory by deleting the nodes
    // delete firstNode;
    // delete secondNode;
    // delete thirdNode;


// ----------------------Doubly Linked List -----------------------
    // Node* firstNode = new Node();
    //     Node* secondNode = new Node();
    //     Node* thirdNode = new Node();

    //     // Assign data to each node
    //     firstNode->data = 1;
    //     secondNode->data = 2;
    //     thirdNode->data = 3;

    //     // Link the nodes together
    //     firstNode->previous = nullptr;
    //     firstNode->next = secondNode;

    //     secondNode->previous = firstNode;
    //     secondNode->next = thirdNode;

    //     thirdNode->previous = secondNode;
    //     thirdNode->next = nullptr;

    //     // Traverse the linked list forward and print the data
    //     Node* currentNode = firstNode;
    //     while (currentNode != nullptr) {
    //         std::cout << currentNode->data << " ";
    //         currentNode = currentNode->next;
    //     }

    //     std::cout << std::endl;

    //     // Traverse the linked list backward and print the data
    //     currentNode = thirdNode;
    //     while (currentNode != nullptr) {
    //         std::cout << currentNode->data << " ";
    //         currentNode = currentNode->previous;
    //     }

    //     // Clean up memory by deleting the nodes
    //     delete firstNode;
    //     delete secondNode;
    //     delete thirdNode;

// --------------------Circular Linked List ---------------------------


// Node* firstNode = new Node();
//     Node* secondNode = new Node();
//     Node* thirdNode = new Node();

//     // Assign data to each node
//     firstNode->data = 1;
//     secondNode->data = 2;
//     thirdNode->data = 3;

//     // Link the nodes together
//     firstNode->next = secondNode;
//     secondNode->next = thirdNode;
//     thirdNode->next = firstNode;  // Points back to the first node

//     // Traverse the circular linked list and print the data
//     Node* currentNode = firstNode;
//     do {
//         std::cout << currentNode->data << " ";
//         currentNode = currentNode->next;
//     } while (currentNode != firstNode);

//     // Clean up memory by deleting the nodes
//     delete firstNode;
//     delete secondNode;
//     delete thirdNode;

// -----------implementing stack using Linked List ------------
// Stack stack;

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     std::cout << "Top element: " << stack.peek() << std::endl;

//     std::cout << "Popped elements: ";
//     while (!stack.isEmpty()) {
//         std::cout << stack.pop() << " ";
//     }
//     std::cout << std::endl;

// ----------------------------implementing queue using Linked List----------------
// Queue queue;

//     queue.enqueue(10);
//     queue.enqueue(20);
//     queue.enqueue(30);

//     std::cout << "Front element: " << queue.peek() << std::endl;

//     std::cout << "Dequeued elements: ";
//     while (!queue.isEmpty()) {
//         std::cout << queue.dequeue() << " ";
//     }
//     std::cout << std::endl;

    return 0;
}