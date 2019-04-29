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
void insertNode(Node* tempNode, Node* root = NULL, int i = 0){
  char c = tempNode->morseKey[i]

  if(c == '.'){//Go Left
    if(root->left != NULL){
      i++;
      insertNode(tempNode, root->left, i)
    }
    else
      root->left = tempNode;//Set New Child
  }
  else if(c == '_'){//Go Right
  if(root->right != NULL){
      i++;
      insertNode(tempNode, root->right, i)
    }
    else
      root->right = tempNode;//Set New Child
  }
  else {
    cout << "input error \n" << endl << break;
  }
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
  insertNode(PQueue.back());
  PQueue.pop_back();
}
