//Ellis Brown
//Midterm review 10/27
//Purpose: analyze recursive functions.

/* TASKS: STUDENT TO DO
 ----- determine what every recursive function requires. comment them here
 ----- for the first 3 functions, find something wrong with the recursive function. Then fix them.
 ----- function 4 ONLY DO after you have extra time.
 ----- function 5: implement the specified function.
 no need to test these, just discuss.
*/
#include <string>
#include <iostream>
using namespace std;
//Struct for function 5, countLeaves
struct Node {
    Node *left, *right;
    int value;
};
//function declarations. No testing provided.
int fibonacci(int i);
int treeHeight(Node *curr);
void printReverse();
void printReverse(string s);


int main() {
    cerr << fibonacci(5);
    //treeHeight(nullptr);
    printReverse();
}


/*
* Purpose: find the n'th fibonacci number.
* recall that the fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…
* zero is the first fibonacci number. =>   fib(1) = 0
* where the n'th number can be computed by taking the sum of the two previous numbers before it.
* Example: fib(3) = 1, fib(4) = 2
*
* Parameters: n-th number in the squence.
*/
int fibonacci(int n) {
    return fibonacci(n-1) + fibonacci(n-2);
}


// Purpose: Return the height of a tree, recursivly.
int treeHeight(Node *curr) {
    if (curr == nullptr) {
        return -1;
    }
    return 1 + treeHeight(curr->left) + treeHeight(curr->right);
}



//Purpose: Check if an item is in a linked list, of size n.
//parameters: pointer to an int array (arr), size of the array (size),
//           value of desired search, (target), current index in array
bool searchArray(int *arr, int size, int target, int index) {
    if (index >= size) { //make sure we are not out of bounds
        return false;
    }
    else if (arr[index] == target) { //see if we found our item
        return true;
    }
    else {
        return searchArray(arr, size, target, index+1);
    }
    return false; //return false if not found
}





//ONLY IF YOU HAVE TIME
// Purpose: n takes in a parameter of a word, and prints the word
// to the standard output streamin reverse
//Example: printReverse() called, and string is midterm. desired output: mretdim
void printReverse() {
    printReverse("midterm");
    cout << endl;
}
void printReverse(string word) {
    if (word.length() == 0) {
        return;
    }
    cout << word[0]; //you cannot change the part of this line that says " word[0] "
    string wordWithouLastChar = word.substr(1, word.length() -1);
    printReverse(wordWithouLastChar);
}


//Purpose: Count the number of leaf nodes in a binary tree.
// Example: the tree has             5
//                                 3   13
//would return 2, for the two leaves.
//Feel free to use any helper functions
int countLeaves(Node* curr) {
    //STUDENT TO DO
    (void) curr;
    return -1;
}


/* 

= ^ . ^ -
comp cat

*/
