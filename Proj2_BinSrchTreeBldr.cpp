#include <iostream>
#include <vector>

using namespace std; 
  
struct Node 
{ 
    char alpha; //Data
    vector<char> morse; //Key
    Node* left, * right; 
}; 
  
Node* newNode(vector<char> morse) 
{ 
    Node* node = (Node*)malloc(sizeof(Node)); 
  
    alpha = morse[0];
    morse.erase(morse.begin());//Remove the Leading CHAR
  
    node->data = morse; 
    node->left = node->right = NULL; //Standard Children are NULL
    return (node); 
}

