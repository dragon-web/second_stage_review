#include<stdio.h>
#define maxnum 100           //���������
#define int_max 65535        //���������
int dist[maxnum];            //��̾���
int prev[maxnum];            //ǰ���ڵ�
typedef struct
{
    char vexs[maxnum];       //��Žڵ�
    int vexsum;              //��Žڵ���
    int edgsum;              //��ű���
    int arc[maxnum][maxnum]; //�ڽӾ���
}graph;
void Dijkstra(graph *G,int v0);  //��̾����㷨
void searchPath(int v0,int i);   //���·���㷨
void creategraph(graph *G);

int main() 
{
    graph G;
    char dot;
    int v0=0;
    creategraph(&G);
    printf("��������ʼ�㣺");
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

        
            printf("%c��%c����̾���Ϊ��%d\n",dot,G.vexs[i],dist[i]);
            printf("%c��%c�����·��Ϊ:", dot, G.vexs[i]);
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
    printf("����������ͼ�Ľڵ�����������");
    scanf("%d %d", &G->vexsum, &G->edgsum);
    getchar();
    printf("������ڵ��ֵ��");
    //fflush(stdin);
    for (int i = 1; i <= G->vexsum; ++i) 
	{ 
        scanf("%c", &G->vexs[i],sizeof(G->vexs[i]));
        getchar();
    }
    for(int i=1;i<=G->vexsum;++i)               //��ʼ���ڽӾ���
        for (int j = 1; j <= G->vexsum; ++j) 
		{
            G->arc[i][j]=int_max;
        }
    for (int i = 1; i <= G->edgsum; ++i)
	{
        fflush(stdin);
        printf("������ߵĶ��㼰Ȩֵ��");
        scanf("%c %c %d", &v1,1, &v2,1, &len);
        getchar();
        for (int j = 1; j <= G->vexsum; ++j)
		{  //���ַ����Ҷ�Ӧ��λ��
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







