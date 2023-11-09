#include<bits/stdc++.h>
using namespace std;

const int N=1e2+10;

int mp[N][N],vis[N][N];
int n;
bool fg = false;

int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

bool check(int nx,int ny){
    if(nx>0&&nx<=n&&ny>0&&ny<=n&&vis[nx][ny]==false)return true;
    return false;
}


void dfs(int x,int y){
   if(vis[x][y]||fg)return;
   vis[x][y]=true;
   for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(check(nx,ny)){
        dfs(nx,ny);
    }
   }
}

int main(){
cin>>n;
for(int i=1;i<=n;++i){
    for(int j=1;j<=n;++j){
      cin>>mp[i][j];
    }
}
dfs(1,1);
puts(fg?"YES":"NO");

    return 0;
}