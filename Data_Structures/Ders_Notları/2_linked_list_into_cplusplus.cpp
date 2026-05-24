// A simple a linked list... C++ code

#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
  
// three nodes
void printListCpp(class Node* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
}   
  
// linked list with 3 nodes 
int main() 
{ 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL; 
  
    // allocate 3 nodes in the heap 
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 
  
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with 
    // the second node 
  
    // assign data to second node 
    second->data = 2; 
  
    // Link second node with the third node 
    second->next = third; 
  
    third->data = 3;
    third->next = NULL; 
  
    printListCpp(head); 
  
    return 0; 
} 
  
