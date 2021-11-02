---
author: Comp 15
title: Midterm II Review Session
geometry: margin=1in
output: pdf_document
export_on_save:
  pandoc: true
---
# About this Review Session
  * Ask Questions! Feel free to raise your hands at any time!
  * We probably won't go through all the worksheet problems, but be sure to ask
    if there's one you want to see us work through
  * If you want to see code, just ask!

**Fall 2020:  Midterm does *not* cover heaps, priority queues, tries**

# Topics Covered Since Last Exam (in no particular order)

## C++

 * Big Three
    * Copy Constructor
    * Assignment Operator
    * Destructor

## Data Structures
 * Stacks/Queues
 * Trees
   *  n-ary trees 
   *  Binary Tree
   *  Binary Search Tree 
   *  Tries
   *  Heaps
 * Priority Queue

## Problem Solving

 * Recursion

# Problems (in no particular order)

## C++
### Big Three

What are each member of the big three used for? (Copy Constructor,
Assignment Operator, Destructor)

## Data Structures

### Stacks/Queues

Refer to review sheet 1 

### n-ary trees 

Write a recursive that recursively counts the number of leaf nodes in the tree.

```c++
int Tree::countLeaves(Node* curr) {
        if (curr == nullptr)
              return 0;
        if (curr->isLeaf())
              return 1;

        int numLeaves = 0;
        for (int i = 0; i < curr->numChildren; i++) {
                numLeaves += countLeaves(curr->children[i]);
        }
        return numLeaves;
}
```

What traversal would you use to delete all nodes in a tree? Why?

Post order, since you want to delete all children before current node is deleted

### Binary Tree

Write a recursive that recursively finds the height of a tree

```c++
int BinaryTree::height(Node* curr) {
        if (curr == nullptr)
              return -1;
        else
              return 1 + max(height(curr->left), height(curr->right));
}
```

Write a recursive function that returns whether an element is in a **Binary
Tree**

```c++
int BinaryTree::find(Node* curr, int data) {
        if (curr == nullptr)
              return false;

        if (curr->data == data)
              return true;

        return find(curr->left) or find(curr->right);
}
```

### Binary Search Tree 

Write a recursive function that returns whether an element is in a **Binary
Search Tree**

```c++
bool BinarySearchTree::find(Node *curr, int data) {
        if (curr == nullptr)
              return false;
        else if (curr->data == data)
              return true;
        else if (data < curr->data)
              return find(curr->left);
        else  // data > curr->data
              return find(curr->right);
}
```

### Tries


### Heaps

Consider the following array. Is it a heap? If so what kind. If not, why?
**Note**: We're starting this heap at index 1


| Index | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   |
| ----- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Value |     | 106 | 105 | 14  | 13  | 100 | 21  | 9   | 3   |



### Priority Queue



You and your friends want to go out for dinner. Everyone has suggested their
favorite restaurant. You have homework you want to do, so you want to go to the
closest one. Given a list of those restaurants and their distance from campus,
how could you use a priority queue to make that decision?

Build a min priority queue and get the first element.


## Problem Solving

### Recursion

*Fill in the blank*

Every recursive function needs a ____ ____ to know when to stop, and needs to
____ itself to continue recursing

*Code* - Reverse a Linked List


```c++
class LinkedList {
public:
        // Reverse function that client will call
        void reverse();
private:
        // Private reverse for recursion
        Node* reverse(Node *curr, Node *newNext);
}

void LinkedList::reverse() {
        front = reverse(front, nullptr);
}

LinkedList::Node *LinkedList::reverse(Node *curr, Node *newNext) {
        // curr will only be nullptr if list is empty
        if (curr == nullptr)
                return nullptr;

        Node *currNext = curr->next;
        curr->next = newNext;

        if (currNext == nullptr)
                return curr;
        else
                return reverse(currNext, curr);
}
```



