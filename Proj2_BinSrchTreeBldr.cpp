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
  
    char alpha = morse[0]; //Data Value
    morse.erase(morse.begin());//Remove the Leading CHAR
  
    node->data = alpha;
    node->morseKey = morse; //Key Value
    node->left = node->right = NULL; //Standard Children are NULL
    return (node); 
}


Node* insert(Node* root, vector<char> morseKey) 
{ 
    // Create a new Node 
    Node* theNewNode = newNode(morseKey); 
  
    // Declare pointer to start traversing root 
    Node* x = root; 
  
    // Trailing pointer of x 
    Node* y = NULL; 
  
    while (x != NULL) { 
        y = x; 
        if (x->morseKey == '.') 
            x = x->left; 
        else if (x->morseKey == '_')
            x = x->right; 
        else 
            cout << "Error with Morse Input @ " << y->data << endl << break;//Error Catching Function
    } 
  
    // If the ROOT is NULL, theNewNode == ROOT node 
    if (y == NULL) 
        y = theNewNode; 
  
    // If the new key ends w/ '.', yNode->left == theNewNode;
    else if (y->morseKey == '.') 
        y->left = theNewNode; 
  
    // Else If the new key ends w/ '_', yNode->right == theNewNode; 
    else if (y->morseKey == '_')
        y->right = theNewNode; 
  
    //Error Catching Function
    else 
            cout << "Error with Morse Input @ " << y->data << endl << break;
  
    // Points to where the new node is inserted 
    return y; 
} 

While(!inputFile.end()){               //PQueue Builder
    vector<char> morse = currentLine;  //Read from File
    PQueue.push_back(new Node(morse)); //Emplace next line as new Node in PQueue

}

PQueue.sort(); // N Log(n)

while(!PQueue.empty()){ //BST Builder
}
  
