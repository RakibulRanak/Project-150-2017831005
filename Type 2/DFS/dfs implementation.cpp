#include<bits/stdc++.h>
using namespace std;
int table[100][100]={0};
int edge_id[100];
int visited[100]={0};
int E,N;
stack<int>S;
//s is starting vartex
//n is number of vertices
void dfs(int s,int n)
{
    S.push(s);
    cout<<s<<" ";
    while(!S.empty())
    {
        int u=S.top();
        visited[u]=1;
        S.pop();
		for(int i=0;i<E;i++)
		{
			if(table[u][i]==1&&visited[i]==0)
			{
				visited[i]=1;
				S.push(i);
				cout<<i<<" " ;
				break;
			}
		}

    }
    for(int i=0;i<N;i++){
        if(visited[i]==0)
            dfs(i,N);
    }
}



int main()
{
    int n,e;
    cout<<"Number of vertices/nodes : " <<endl;
    cin>>n;
    N=n;
    cout<<"Number of edges: "<<endl;
    cin>>e;
    E=e;
    int n1,n2;
    for(int i=0;i<e;i++)
    {
        cin>>n1>>n2;
        table[n1][n2]=1;

    }
    for(int i=0;i<e;i++)
    {
        for(int j=0;j<e;j++)
            cout<<table[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Enter the vertice you want to start dfs: "<<endl;
    int N;
    cin>>N;
    dfs(N,n);
    return 0;

}
