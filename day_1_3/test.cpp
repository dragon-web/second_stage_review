#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<set>
#include<map>
using namespace std;
#define rep(i,a,N) for (int i=a;i<N;i++)
#define per(i,a,N) for (int i=N-1;i>=a;i--)
#define oo cout<<"!!!"<<endl;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s) memset(s, 0, sizeof(s))
const int inf = 0x3f3f3f3f;
//head
 
const int maxn = 1111;
std::vector<int> g[maxn];
double S,M,V;
double dis[maxn][maxn];
int N,T;
 
struct max_mactch
{
	vector<int>g[maxn];
	bool vis[maxn];
	int left[maxn];
 
	void init()
	{
		rep(i,0,T+11)g[i].clear();
		memset(left,-1,sizeof left);
	}
 
	bool match(int u)
	{
		rep(i,0,g[u].size())
		{
			int v = g[u][i];
			if(!vis[v])
			{
				vis[v] = true;
				if(left[v] == -1 || match(left[v]))
				{
					left[v] = u;
					return true;
				}
			}
		}
		return false;
	}
 
	bool C(double mid)
	{
		double P = mid;
		init();
		int k = 1;
 
		while(P>=S)
		{
			P -= S;
			k++;
			rep(i,1,T+1)
				rep(j,1,N+1)
				if(dis[j][i] <= P)
					g[i].push_back(T+(k-1)*N+j);
			P-=M;
		}
		int ans = 0;
		rep(i,1,T+1)
		{
			ms(vis);
			if(match(i))
				ans++;
		}
		return ans == T;
 
	}
}WW;
struct node
{
	double x,y;
}a[maxn];
 
int main() 
{
	
	cin>>N>>T>>S>>M>>V;
	S /= 60;
 
	rep(i,1,T+1)
	{
		cin>>a[i].x>>a[i].y;
	}
	rep(i,1,N+1)
	{
		double x,y;
		cin>>x>>y;
		rep(j,1,T+1)
		{
			dis[i][j] = sqrt((x-a[j].x) * (x-a[j].x) + (y-a[j].y) * (y - a[j].y)) / V;
		} 
	}
	double l = S,r = 1111111;
	rep(i,1,111)
	{
		double mid = (l+r)/2;
		if(WW.C(mid))r = mid;
		else l = mid;
	}
	printf("%.6lf",r);
}
