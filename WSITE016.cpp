// C implementation of search and insert operations
// on Trie
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
 #define val(x)                  cout<<#x<<" "<<x<<endl;
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
#define CHAR_SIZE 26
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
// trie node
struct TrieNode
{
    struct TrieNode *character[ALPHABET_SIZE];
 
    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};
 
// Returns new trie node (initialized to NULLs)
 
// Function that returns a new Trie node
TrieNode* getNewTrieNode()
{
    TrieNode* node = new TrieNode;
    node->isLeaf = false;
 
    for (int i = 0; i < CHAR_SIZE; i++)
        node->character[i] = NULL;
 
    return node;
}
 
// Iterative function to insert a string in Trie.
void inser_t(TrieNode*& head, string str)
{
    // start from root node
    TrieNode* curr = head;
    int i = 0;
    while (i<str.size())
    {
        // create a new node if path doesn't exists
        if (curr->character[str[i] - 'a'] == NULL)
            curr->character[str[i] - 'a'] = getNewTrieNode();
 
        // go to next node
        curr = curr->character[str[i] - 'a'];
 
        // move to next character
        i++;
    }
 
    // mark current node as leaf
    curr->isLeaf = true;
}
 
// Iterative function to search a string in Trie. It returns true
// if the string is found in the Trie, else it returns false
int search(TrieNode* head, string str)
{
    // return false if Trie is empty
    if (head == NULL)
        return false;
 
    TrieNode* curr = head;
    int i = 0;
    while (i < str.size())
    {
        // go to next node
        curr = curr->character[str[i] - 'a'];
 
        // if string is invalid (reached end of path in Trie)
        if (curr == NULL)
            return (i);
 
        // move to next character
        i++;
    }
 
    // if current node is a leaf and we have reached the
    // end of the string, return true
    return -1;
}
 
// Driver
int main()
{
    int n,i=0;
    char ch;
    cin>>n;
    string s[n];
    //char sc[200005];
    vector<string> v;
    set<string> st;
    vector<string>::iterator it;
    set<string>::iterator it1;
    struct TrieNode *root = getNewTrieNode();
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
            string sc;
            cin>>sc;
            inser_t(root, sc);
        }
    }
    int a=0;
    for(int j=0;j<i;j++)
    {
        string sa = "";

        a=search(root,s[j]);
        //val(a);
       //cout<<a<<endl;
        if(a==-1)
            break;
        for(int k=0;k<=a;k++)
        {
            //sa[k]=s[j][k];
			//sa = sa + s[j][k];
            sa.push_back(s[j][k]);
        }//cout<<sa;
       // cout<<sa[0]<<endl;
      //  v.push_back(sa);
        st.insert(sa);
    }
    if(a==-1)
        cout<<"-1"<<endl;
    else
    {cout<<st.size()<<endl;
        for(it1=st.begin();it1!=st.end();it1++)
        cout<<*it1<<endl;}

    return 0;
}