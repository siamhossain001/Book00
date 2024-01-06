#include <iostream>
#include<vector>

using namespace std;

struct TrieNode {
    TrieNode* BOX[26];  // 26 slots for each letter of the alphabet
    bool isEndOfWord;  // Marks the end of a word
};

TrieNode* createNode() {
    TrieNode* node = new TrieNode;
    node->isEndOfWord = false;
    for (int i = 0; i < 26; ++i) {
        node->BOX[i] = NULL;    // Initialize all letters to null
    }
    return node;
}

void insert(TrieNode* root, string word) {
    TrieNode* current = root;

    for (int i=0;i<word.size();i++) {
        int index = word[i] - 'a';    // Convert letter to a number (0 to 25)
        if (current->BOX[index] == NULL) {
            current->BOX[index] = createNode();  //if not exist, create
        }
        current = current->BOX[index]; //traverse
    }
    current->isEndOfWord = true;   //word end true
}

bool isfound(string words,TrieNode *root){
    TrieNode *current = root;
    for(int i=0;i<words.size();i++){
        int index = words[i] - 'a';
        if(current->BOX[index] == NULL){
            return false;
        }
        current = current->BOX[index];
    }
    if(current->isEndOfWord == true){
        return true;  
    }
    else {
        return false;
    }
}

int main() {
    TrieNode* root = createNode();
    
    int x;
    string words;

    cout<<"how many words are there?"<<endl;
    cin>>x;
    
    cout<<"Enter the words"<<endl;
    while(x--){
        cin>>words;
        insert(root, words);
    }
 
    cout<<"Enter the word you want to search"<<endl;
    cin>>words;

    if(isfound(words,root)){
        cout<<"the word is found"<<endl;
    }

    else{
        cout<<"the word is not found"<<endl;
    }

    return 0;
}