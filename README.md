# EXPERIMENT NO – 17

* Aim: To study and implement Linked List in C++ for dynamic memory allocation and efficient data management.

* Tools Used: IDE, C++ compiler, classes, pointers, dynamic memory (new and delete).

* Theory:

In C++, a Linked List is a linear data structure where elements (called nodes) are connected using pointers. Unlike arrays, linked lists do not store elements in contiguous memory locations; instead, each node contains data and a pointer to the next node.

-The first node is called the head of the list.

-The last node points to NULL, indicating the end of the list.

-Linked lists allow dynamic memory allocation, meaning nodes can be created and deleted at runtime.

🔹 *Key Features of Linked Lists:*

* Dynamic size (can grow or shrink during execution).

* Efficient insertions and deletions compared to arrays.

* Sequential access (no direct indexing like arrays).

🔹 *Basic Structure of a Linked List Node:*

    class Node {
    public:
    int data;      // stores the value
    Node* next;    // pointer to the next node

    Node(int val) {
        data = val;
        next = NULL;
    }
    };


🔹 *Common Operations in Linked List:*

* Insertion

-At the beginning (head).

-At the end (tail).

-At a specific position.

* Deletion

-From the beginning.

-From the end.

-From a given position.

* Traversal

-Display all nodes by moving from head to NULL.


🔹 *Advantages of Linked List:*

* Dynamic memory allocation, no fixed size.

* Efficient insertions and deletions compared to arrays.

* Can implement advanced data structures (stacks, queues, graphs).


# Conclusion:

Linked lists in C++ provide a flexible way to store and manage data dynamically. They allow efficient insertion and deletion compared to arrays, though at the cost of extra memory for pointers and sequential access. Overall, they are a powerful foundation for implementing advanced data structures.
