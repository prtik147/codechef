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
    int length = strlen(key);//cout<<length<<endl;
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
    string s[n];
    set<string> st;
    set<string>::iterator it1;
    struct TrieNode *root = getNode();

    //char s[n][50003];
    /*if(n<25000)
    char s[n][200005];
    else
    char s[n][50003];*/

    while(n--)
    {
        cin>>ch;
        if(ch=='-')
        {
            cin>>s[i];//cout<<s[i]<<endl;
            i++;
        }
        else
        {
            char sc[200005];
            cin>>sc;
            inser_t(root, sc);
        }
    }
    int a=0;
    for(int j=0;j<i;j++)
    {
        string sa;
        char arr[200005];
        for(int m=0;m<s[j].length();m++)
            arr[m]=s[j][m];

        a=search(root,arr);
       // val(a);
       //cout<<a<<endl;
        if(a==-1)
            break;
        for(int k=0;k<=a;k++)
        {
        	sa.push_back(s[j][k]);
        }
        st.insert(sa);
    }
    if(a==-1)
        cout<<"-1"<<endl;
    else
    {
        cout<<st.size()<<endl;
        for(it1=st.begin();it1!=st.end();it1++)
        cout<<*it1<<endl;
    }

    return 0;
}