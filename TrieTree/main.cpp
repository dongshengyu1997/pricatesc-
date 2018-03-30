#include <iostream>
#include <cstring>
using namespace std;
class TrieNode{
public:
    char a;
    bool isword;
    TrieNode* dir[26];
    TrieNode()
    {
        a = 0;
        isword = false;
        memset(dir,0x0,sizeof(TrieNode*)*26);
    }
    TrieNode(char c)
    {
        a = c;
        isword = false;
        memset(dir,0x0,sizeof(TrieNode*)*26);
    }
    
};
class Trie {
public:
    /** Initialize your data structure here. */
public:
    TrieNode *root;
    
    Trie() {
        root = new TrieNode();
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *pode = root;
        if(word.length() <= 0)
            return;
        for(int i = 0;i < word.length();i++)
        {
            char c = word[i];
            if(pode->dir[c - 'a'] == 0)
            {
                pode->dir[c - 'a'] = new TrieNode(c);
            }
            pode = pode->dir[c - 'a'];
        }
        pode->isword = true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *pode = root;
        for(int i = 0;i < word.length();i++)
        {
            if(pode->dir[word[i] - 'a'] == NULL)
                return false;
            pode = pode->dir[word[i] - 'a'];
        }
        return pode->isword;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *pNode = root;  
        if (prefix.length()<=0)  
            return true;  
        for (int i=0; i<prefix.length(); i++)  
        {  
            char c = prefix[i];  
            pNode = pNode->dir[c-'a'];  
            if (pNode == NULL)  
                return false;  
        }  
        return true;  
    }
    void freeTrie(TrieNode *root)
    {
        if (root == NULL)
            return;
        for(int i = 0;i < 26;i++)
        {
            TrieNode* pode = root->dir[i];
            if(pode != NULL)
                freeTrie(pode);
        }
        delete root;
    }
    ~Trie()
    {
        freeTrie(root);
    }
    
};