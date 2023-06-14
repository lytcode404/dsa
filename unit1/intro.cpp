#include <iostream>
using namespace std;
// ---------------intro to Data Structures--------------
// Data structures are ways to organize and store data in a computer program. They help us efficiently manage and manipulate data so that we can perform operations on it easily.

// Think of data structures as containers that hold different types of data, like numbers or words. They provide a way to organize this data in a structured manner, making it easier to access and work with.

// ----------------Intro to Arrays----------------------
// Arrays are a fundamental data structure in programming that allow you to store multiple elements of the same type under a single name. They provide a way to group related data together and access it using an index.

// ----------------Intro to Stack-----------------------
// A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. It behaves similar to a stack of books, where the last book placed on the stack is the first one to be removed.

// The stack has two primary operations:

// Push: This operation adds an element to the top of the stack.
// Pop: This operation removes the topmost element from the stack.
// Additional operations often associated with stacks are:

// Peek or Top: This operation returns the value of the top element without removing it.
// IsEmpty: This operation checks if the stack is empty or not.

// #define MAX_SIZE 100

// class Stack
// {
// private:
//     int arr[MAX_SIZE];
//     int top;

// public:
//     Stack()
//     {
//         top = -1; // Initialize the stack with an invalid index
//     }

//     void push(int value)
//     {
//         if (top >= MAX_SIZE - 1)
//         {
//             cout << "Stack Overflow! Cannot push element.\n";
//             return;
//         }
//         arr[++top] = value;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow! Cannot pop element.\n";
//             return;
//         }
//         --top;
//     }

//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty.\n";
//             return -1;
//         }
//         return arr[top];
//     }

//     bool isEmpty()
//     {
//         return top == -1;
//     }
// };

// -----------------Intro to Queue-----------------------
// A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. It works similar to a queue of people waiting in line for something.

// Imagine you're waiting in a queue at a ticket counter. The person who arrives first gets served first, and as people join the line, they stand behind the others. When the ticket counter serves someone, that person moves out of the queue, and the next person in line gets their turn.

// Enqueue: This operation adds an element to the back of the queue.
// Dequeue: This operation removes the frontmost element from the queue.
// Front: This operation returns the value of the front element without removing it.
// IsEmpty: This operation checks if the queue is empty or not.

// #define MAX_SIZE 100

// class Queue {
// private:
//     int arr[MAX_SIZE];
//     int front;
//     int rear;

// public:
//     Queue() {
//         front = -1; // Initialize the queue with invalid indices
//         rear = -1;
//     }

//     void enqueue(int value) {
//         if (rear == MAX_SIZE - 1) {
//             cout << "Queue Overflow! Cannot enqueue element.\n";
//             return;
//         }
//         if (front == -1) {
//             front = 0;
//         }
//         arr[++rear] = value;
//     }

//     void dequeue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue Underflow! Cannot dequeue element.\n";
//             return;
//         }
//         ++front;
//     }

//     int frontValue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty.\n";
//             return -1;
//         }
//         return arr[front];
//     }

//     bool isEmpty() {
//         return front == -1 || front > rear;
//     }
// };


// -----------------------Sparse Matrices-------------------------
// A sparse matrix is a special type of matrix where the majority of its elements are zero. In other words, most of the cells in the matrix do not contain any meaningful data.

// Imagine a grid-like structure with rows and columns, where each cell represents a value. In a regular matrix, most of the cells have non-zero values, but in a sparse matrix, there are a lot of zeros.

// Sparse matrices are used to efficiently represent and store data that is mostly zero. Instead of allocating memory for every single cell, we only store the non-zero elements along with their row and column indices.

// By only storing the non-zero elements, sparse matrices can save a significant amount of memory compared to regular matrices. This is especially useful when working with large matrices where a majority of the elements are zero.

// Sparse matrices are commonly used in various fields such as scientific computing, data analysis, graph algorithms, and image processing, where large datasets or computations involve sparse data.

// To work with sparse matrices, specialized data structures and algorithms are used to efficiently handle and manipulate the non-zero elements, perform operations like addition or multiplication, and optimize memory usage.

// In summary, a sparse matrix is a matrix where most of the cells contain zeros. It allows us to save memory by only storing the non-zero elements. Sparse matrices are useful in scenarios where data sparsity is prevalent, enabling efficient representation and operations on such data structures.

// class SparseMatrix {
// private:
//     int rows;
//     int columns;
//     vector<vector<int>> elements;

// public:
//     SparseMatrix(int numRows, int numCols) {
//         rows = numRows;
//         columns = numCols;
//     }

//     void addElement(int row, int col, int value) {
//         if (row < 0 || row >= rows || col < 0 || col >= columns) {
//             cout << "Invalid index! Element cannot be added.\n";
//             return;
//         }
//         elements.push_back({row, col, value});
//     }

//     int getElement(int row, int col) {
//         for (const auto& element : elements) {
//             if (element[0] == row && element[1] == col) {
//                 return element[2];
//             }
//         }
//         return 0; // Return 0 for non-existent elements (zeros)
//     }

//     void displayMatrix() {
//         for (int row = 0; row < rows; row++) {
//             for (int col = 0; col < columns; col++) {
//                 int element = getElement(row, col);
//                 cout << element << " ";
//             }
//             cout << endl;
//         }
//     }
// };



int main()
{
    // --------------Array Program--------------------------------
    // int ages[5];
    // ages[0] = 20; // Assigning the value 20 to the first element of the array
    // ages[1] = 25; // Assigning the value 25 to the second element of the array
    // int numbers[] = {10, 20, 30, 40, 50};

    //  -------------Stack Program---------------------------------
    // Stack myStack;
    // myStack.push(10); // Pushing element 10 onto the stack
    // myStack.push(20); // Pushing element 20 onto the stack
    // myStack.push(30); // Pushing element 30 onto the stack

    // cout << "Top element: " << myStack.peek() << endl; // Output: 30

    // myStack.pop(); // Removing the top element from the stack

    // cout << "Top element: " << myStack.peek() << endl; // Output: 20

    // cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl; // Output: No

    // --------------Queue Program-----------------------------------

    //  queue<int> myQueue;

    // myQueue.push(10);   // Enqueue element 10 into the queue
    // myQueue.push(20);   // Enqueue element 20 into the queue
    // myQueue.push(30);   // Enqueue element 30 into the queue

    // cout << "Front element: " << myQueue.front() << endl;   // Output: 10

    // myQueue.pop();      // Dequeue the front element from the queue

    // cout << "Front element: " << myQueue.front() << endl;   // Output: 20

    // cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;   // Output: No


    // ----------------Sparce Matrices-------------------------------
    // int numRows = 3;
    // int numCols = 4;

    // SparseMatrix sparse(numRows, numCols);

    // sparse.addElement(0, 0, 1);
    // sparse.addElement(0, 1, 0);
    // sparse.addElement(0, 2, 0);
    // sparse.addElement(0, 3, 0);
    // sparse.addElement(1, 0, 0);
    // sparse.addElement(1, 1, 2);
    // sparse.addElement(1, 2, 0);
    // sparse.addElement(1, 3, 0);
    // sparse.addElement(2, 0, 0);
    // sparse.addElement(2, 1, 0);
    // sparse.addElement(2, 2, 3);
    // sparse.addElement(2, 3, 0);

    // sparse.displayMatrix();


    

    return 0;
}