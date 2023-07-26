#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)pq.push(v[i]);
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        if(c == 0)
        {
            int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(c == 1)
        {
            if(!pq.empty())cout<<pq.top()<<endl;
            else cout<<"Empty"<<endl; 
        }
        else if(c == 2)
        {
            if(!pq.empty())pq.pop();
            if(!pq.empty())cout<<pq.top()<<endl;
            else cout<<"Empty"<<endl; 
        }
    }
    return 0;
}