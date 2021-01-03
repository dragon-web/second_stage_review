#include<stdio.h>
#define maxnum 100           //存放最大点数
#define int_max 65535        //存放正无穷
int dist[maxnum];            //最短距离
int prev[maxnum];            //前驱节点
typedef struct
{
    char vexs[maxnum];       //存放节点
    int vexsum;              //存放节点数
    int edgsum;              //存放边数
    int arc[maxnum][maxnum]; //邻接矩阵
}graph;
void Dijkstra(graph *G,int v0);  //最短距离算法
void searchPath(int v0,int i);   //最短路径算法
void creategraph(graph *G);

int main() 
{
    graph G;
    char dot;
    int v0=0;
    creategraph(&G);
    printf("请输入起始点：");
    scanf("%c",&dot);
    getchar();
	int j;
    for ( j = 1;j<=G.vexsum; ++j) {
        if (dot == G.vexs[j])
            v0 = j;
    }
    Dijkstra(&G, v0);
    for (int i = 1; i <= G.vexsum; ++i) {
        
        if (dist[i] < int_max)
		{

        
            printf("%c到%c的最短距离为：%d\n",dot,G.vexs[i],dist[i]);
            printf("%c到%c的最短路径为:", dot, G.vexs[i]);
            searchPath(v0,i);
        } 
    }
}


void creategraph(graph* G)
{
    printf("%p\n", &dist);
    printf("%p\n", &G->arc);
    char v1, v2;
    int len;
    int x, y;
    x = y = 0;
    printf("请输入有向图的节点数及边数：");
    scanf("%d %d", &G->vexsum, &G->edgsum);
    getchar();
    printf("请输入节点的值：");
    //fflush(stdin);
    for (int i = 1; i <= G->vexsum; ++i) 
	{ 
        scanf("%c", &G->vexs[i],sizeof(G->vexs[i]));
        getchar();
    }
    for(int i=1;i<=G->vexsum;++i)               //初始化邻接矩阵
        for (int j = 1; j <= G->vexsum; ++j) 
		{
            G->arc[i][j]=int_max;
        }
    for (int i = 1; i <= G->edgsum; ++i)
	{
        fflush(stdin);
        printf("请输入边的顶点及权值：");
        scanf("%c %c %d", &v1,1, &v2,1, &len);
        getchar();
        for (int j = 1; j <= G->vexsum; ++j)
		{  //用字符查找对应的位置
            if (v1 == G->vexs[j])
                x = j;
        }
        for (int n = 1; n <= G->vexsum; ++n)
		{
            if (v2 == G->vexs[n])
                y = n;
        }
        G->arc[x][y] = len;
    }
}



void searchPath(int v0, int i)
 {
    int que[maxnum];
    int tot = 1;
    que[tot] = i;
    tot++;
    int temp = prev[i];
    while (temp != v0) 
	{
        que[tot] = temp;
        tot++;
        temp = prev[temp];
    }
    que[tot] = v0;
    for (int i = tot; i >= 1; --i)
	{
        if (i != 1)
            printf("%d->", que[i]);
        else
            printf("%d\n", que[i]);
    }
 }





void Dijkstra(graph* G, int v0) 
{
    int s[maxnum];
    for (int i = 1; i <= G->vexsum; ++i)
    {
        dist[i] = G->arc[v0][i];
        s[i] = 0;
        if (dist[i] == int_max)
            prev[i] = 0;
        else
            prev[i] = v0;
    }
    s[v0] = 1;
    dist[v0] = 0;
    for (int i = 1; i <= G->vexsum; ++i)
	{
        int u = v0;
        int temp = int_max;
        for (int j = 1; j <= G->vexsum; ++j)
		{
            if (dist[j] < temp && !s[j])
			{
                u = j;
                temp = dist[j];
            }
        }
        s[u] = 1;
        for (int j = 1; j <= G->vexsum; ++j)
        {
            if (!s[j] && G->arc[u][j] < int_max)
			{
                int newdist = dist[u] +G->arc[u][j];
                if (newdist < dist[j]) 
				{
                    dist[j] = newdist;
                    prev[j] = u;
                }
            }
        }
    }
}







