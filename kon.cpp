
// на плюсах
#include<iostream>
#include<queue>
using namespace std;
int main() {
    int n,i,j,k,x1,y1,x2,y2,u,v;queue<pair<int,int>>q;
    int x[8]={-2,-2,-1,-1,1,1,2,2},
            y[8]={-1,1,-2,2,-2,2,-1,1};
    cin>>n;int d[n+1][n+1];
    for(i=0;i<=n;++i)
        for(j=0;j<=n;++j)d[i][j]=1000000000;
    for(int k =0;k<=n+1;k++){
        cout << "\n";
        for(int u = 0;u<=n+1;u++){
            cout<<d[k][u]<<"\t";
        }
    }
    cin>>x1>>y1>>x2>>y2;
    d[x1][y1]=0; q.push(make_pair(x1,y1));
    while(!q.empty()){
        i=q.front().first;j=q.front().second;q.pop(0);
        for(k=0;k<8;++k){u=i+x[k];v=j+y[k];
            if(u>0&&u<=n&&v>0&&v<=n&&d[u][v]>d[i][j]+1){
                d[u][v]=d[i][j]+1;q.push(make_pair(u,v));}}}
    cout<<d[x2][y2];
    for(int k =0;k<=n+1;k++){
        cout << "\n";
        for(int u = 0;u<=n+1;u++){
            cout<<d[k][u]<<"\t";
        }
    }
    return 0;}
