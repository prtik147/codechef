/*=======================*/
//PRATEEK KUMAR MAURYA   //
//NIT RAIPUR             //
//IT (2015-2019)         //
/*=======================*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define forall(i,a,b)               for(i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))

#define MAX(a,b)              ((a) > (b) ? (a) : (b))
#define MIN(a,b)              ((a) < (b) ? (a) : (b))

#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define fi first
#define se second
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define nl            cout<<endl

int main() 
{
	ios::sync_with_stdio(false);
	int t;
    cin>>t;
    while(t--)
    {
    	int n,k,i,j;
    	cin>>n>>k;
    	si st,s[n],sf;
   		forall(i,0,n)
    	{
    		int num;
    		cin>>num;
    		while(num--)
    		{
    			int c;
    			cin>>c;
    			st.insert(c);
    			s[i].insert(c);
    		}
    	}
    	if(st.size()<k)
    	{
    		cout<<"sad"<<endl;
    	}
    	else
    	{
    		si ::iterator it1,it2;
    		int f=1;
    		forall(i,0,n)
    		{
                sf.clear();
    			forall(j,i+1,n)
    		    {
    		    			if(s[i].size()<=s[j].size())
    		    			{
    		    				it1=s[i].begin();
    		    				//it2=s[j].begin();
    		    				for(it1;it1!=s[i].end();it1++)
    		    				sf.insert(*it1);
                                it1=s[j].begin();
                                for(it1;it1!=s[j].end();it1++)
                                sf.insert(*it1);

                                if(sf.size()==s[j].size())
                                    {f=0;
                                        break;}
    		    			}
    		    			else
    		    			{
    		    				it2=s[j].begin();
    		    				//it2=s[j].begin();
    		    			   for(it2;it2!=s[j].end();it2++)
                                sf.insert(*it2);
                                it2=s[i].begin();
                                for(it2;it2!=s[i].end();it1++)
                                sf.insert(*it2);

                                if(sf.size()==s[i].size())
                                    {f=0;
                                        break;}	
    		    			}
    		    			/*if(f==1)
    		    			{
    		    				cout<<"some"<<endl;
    		    				break;
    		    			}*/
    			}
    			if(f==0)
    				break;
    		}
    		if(f==0)
    			cout<<"some"<<endl;
            else
                cout<<"all"<<endl;
    	}
    }
    return 0;
}