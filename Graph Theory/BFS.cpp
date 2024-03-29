#include<bits/stdc++.h>
#define sz 100005
using namespace std;
vector<int> adj[sz];
bool visit[sz];
int label[sz];
void adjacent_list(int node){
    int i,j;
    for(i=0; i<node; i++)
    {
        cout<<i<<" adjacent : ";
        for(j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void bfs(int s,int ln)
{
    int cnt = 0;
    queue<int> q;
    q.push(s);
    visit[s]=true ;
    label[s] = 1;
    if(ln ==1)  {
        cout <<"\n"<< cnt+1;
        return ;
    }
    while(!q.empty())
    {
        int u = q.front();
       // cout<< u<<"  ";
        q.pop();
        for(int a=0; a<adj[u].size(); a++)
        {
            int b=adj[u][a];
            if(visit[b]==false)
            {
                q.push(b);
                visit[b]=true;
                label[b]=label[u]+1;
                if(label[b]==ln)  cnt++;
            }
        }
    }
    cout <<"\n"<< cnt;
}
int main()
{
    int node,v1,v2,i,j,edge,start,label_no;
    cout<<"Enter number of node and edge : ";
    cin >> node>>edge;
    // input the graph/tree
    for(i =0; i<edge; i++)
    {
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    cout<<"Enter the starting node for BFS : ";
    cin>>start;
//    //display the adjacent list
//    cout<<"The adjacent list :-"<<"\n";
//    adjacent_list(node);

    cout<<"Enter the label no : ";
    cin>>label_no;
    bfs(start,label_no);

//    cout<<"\nThe traverse order in BFS are : ";
//    bfs(start);
//    return 0;
}
