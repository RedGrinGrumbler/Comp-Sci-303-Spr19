#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

/*
- Node Constructor
- File Reader
- Vector Builder
- Vector Sorter
  - Prep Vector for BST 
    - 
- BST Builder : Fed by Vector
  - Initialize "root"
    ** How to Initializea Root? ** 
  - Insert L/R Children
    - Call Recursively

    

*/

struct Node{
    char alpha; //Data
    vector<char> morse; //Key
    Node* left, * right;
};

ifstream inputFile("");
string line;
vector<Node> PQueue;

Node* newNode(vector<char> morse, char alpha){
    Node* node = (Node*)malloc(sizeof(Node));

    node->data = alpha;
    node->morseKey = morse; //Key Value
    node->left = node->right = NULL; //Standard Children are NULL
    return (node);
}
Node* insert(Node* root, vector<char> morseKey){
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

While(getline(inputFile, line)){//PQueue Builder
    vector<char> morseKey;      //Initialize vector
    char c = line.front();      //Set Value of Node "a,b,c.. etc"
    line.replace(0,1,"");       //remove Alpha Char
    
    while(!line.empty()){ //Build Morse vector
      morseKey.push_back(line.front());   //Push Morse Char onto vector
      line.replace(0,1,"");               //Remove Morse Char from Str 
    }
    
    morseKey.reverse();
    Node thisNode = newNode(morseKey, c); //Create Node 
    PQueue.push_back(thisNode);           //Push new Node onto PQueue 
}

PQueue.sort(0, morse.size()+1, greater<>(node.morseKey)); // N Log(n), Sorts Whole Vector in descending order

while(!PQueue.empty()){ //BST Builder
  
}
