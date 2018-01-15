// C implementation of search and insert operations
// on Trie
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <set>
#include <string>
using namespace std;
 
 #define val(x)                  cout<<#x<<" "<<x<<endl;
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
 
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
 
    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
 
// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = NULL;
 
    pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
 
    if (pNode)
    {
        int i;
 
        pNode->isLeaf = false;
 
        for (i = 0; i < ALPHABET_SIZE; i++)
            pNode->children[i] = NULL;
    }
 
    return pNode;
}
 
// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node
void inser_t(struct TrieNode *root, const char *key)
{
    int level;
    int length = strlen(key);
    int index;
 
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
 
    // mark last node as leaf
    pCrawl->isLeaf = true;
}
 
// Returns true if key presents in trie, else false
int search(struct TrieNode *root, const char *key)
{
    int level;
    int length = strlen(key);
    int index;
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if (!pCrawl->children[index])
            return level;
 
        pCrawl = pCrawl->children[index];
    }
 
    /*if(pCrawl != NULL && pCrawl->isLeaf)
    return -1;
    else
    return level;*/
    return -1;
}
 
// Driver
int main()
{
    int n,i=0;
    char ch;
    cin>>n;
    char s[n][200005];
    //char sc[200005];
    vector<string> v;
    set<string> st;
    vector<string>::iterator it;
    set<string>::iterator it1;
    struct TrieNode *root = getNode();
    while(n--)
    {
        cin>>ch;
        if(ch=='-')
        {
            cin>>s[i];
            i++;
        }
        else
        {
            char sc[200005];
            cin>>sc;
            inser_t(root, sc);
        }
    }
    for(int j=0;j<i;j++)
    {
        string sa;

        int a=search(root,s[j]);
       // val(a);
        int k;
        for(k=0;k<=a;k++)
        {
            sa[k]=s[j][k];
        }
       // cout<<sa[0]<<endl;
      // v.push_back(sa);
        st.insert(sa);
    }
    cout<<st.size()<<" "<<v.size()<<endl;
    it=v.begin();
    it1=st.begin();
    for(int y=0;y<v.size();y++)
    {
        cout<<v[y]<<endl;
    }
    for(it1;it1!=st.end();it1++)
    cout<<*it1<<endl;

    return 0;
}