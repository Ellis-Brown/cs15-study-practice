/* Midterm review Fall 2020
 Review questions to check understanding of Big O notation, and runtime.
 Author: Ellis Brown, 10/27/2020
*/

//STUDENT TO DO: View the following functions (you do not need int main)
// DETERMINE THE BIG O RUNTIME OF EACH FUNCTION
// assume n is some large number.
#include <iostream>
#include <limits>
using namespace std;

//struct for binary tree questions
struct Node {
    Node *left, *right;
    int value;
};
//function declarations
void function1(int n);
void function2(int n);
void function3(int *arr, int n);
void function4(int *arr, int n);
void function5(int *arr, int n);
void function6(int *arr, int n);
bool search(int *arr, int n, int target, int current_index);
int findMax(int *arr, int n);
int uselessFunction(int *arr, int n);
//example driver for main function.
//test cases would have to be self written. just an example driver, to see function calls.

int main() {
    int someN = 12345;
    int *someArray = new int[someN];
    function1(someN);
    function2(someN);
    function3(someArray, someN);
    function4(someArray, someN);
    function5(someArray, someN);
    function6(someArray, someN);
    binarySearch( someArray, someN,  232122,  0);
    //findMax(int *arr, int n); //sorry, I wrote this 1.5 hrs before lab,
    //I didn't have time to write this.
    uselessFunction(someArray, someN);


}
/* Purpose: print " Cool beans! \n" for every number divisible by 123 in n
 Proper documentation is needed but not written for big O practice.
*/
void function0(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 123 == 0)  {
                cout << " Cool beans! " << endl;
            }
        }

    }
}



//Some function. Proper documentation is needed but not written for big O practice.

void function1(int n) {
    for (int i = 0; i < 25; i++) {
        cout << "I love taking midterms!" << n;
        cout << "!" << endl;
    }
}


//Some function. Proper documentation is needed but not written for big O practice.
void function2(int n) {
   int count = 0;
   while (n > 0) {
       cout << "count * n " << count * n << endl;
       count++;
       n--;
   }
}

//Some function. Proper documentation is needed but not written for big O practice.
void function3(int *arr, int n) {
    (void) arr;
    int i = 2131234;
    while (i > 0) {
        i--;
    }
    cout << n;
}

/* Parameters: arr is an array of integers, sorted.
 *             n is the number of elements in the array.
 */
void function4(int *arr, int n) {
    for (int i = 0; i < 23; i++) {
        cout << arr[i] << " ";
    }
    if (n % 2 == 1){
        cout << arr[23];
    }
}


/* Parameters: arr is an array of integers, sorted.
 *             n is the number of elements in the array.
 */
void function5(int *arr, int n) {
    while (n > 2) {
        if (n%2 == 0) {
            cout << "Wow! n is currently even!" <<endl;
        }
        n = n / 2;
        cout << arr[n];
    }
} 


/* Parameters: arr is an array of integers, sorted.
 *             n is the number of elements in the array.
 */
void function6(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        function5(arr, n);
        function4(arr, n);
    }
}

/* Purpose: Find if the target is in the array
 * Parameters: arr is an array of integers, sorted.
 *             n is the number of elements in the array.
 *             target is the number we are searching for
 *             current index is the index we are on in the array
 * Note: Assume this function is called from main with current_index = 0;
 */

bool search(int *arr, int n, int target, int current_index) {
    if (current_index >= n ) { //make sure not out of bounds
        return false;
    }
    if (arr[current_index] == target) { //see if we found our current index.
        return true;
    }
    return search(arr, n, target, current_index+1);

}
/* Purpose: Find the max element the subtree of current node
 * Parameters: current node.
 * FOR THIS PROBLEM: assume the binary tree has n elements and is ...
 * a) balenced
 * b) unbalenced
 *
 */
int findMax(Node *curr) {
    if (curr == nullptr) {
        return -numeric_limits<int>::max();
    }
    if (curr->right == nullptr) {
        return curr->value;
    }
    return findMax(curr->right);
}


/* Parameters: arr is an array of integers, sorted.
 *             n is the number of elements in the array.
 */
int uselessFunction(int *arr, int n) {

    while (n > 0) {
        function1(n);
        function2(n);
        function3(arr, n);
        n--;
    }
    return -15;
}

/* 

= ^ . ^ -
comp cat

*/