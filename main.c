#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<math.h>
typedef struct{
    int degree,key,*wt;
    char name, *adj,parent;
}vertex;
typedef struct{
    vertex **list;
    int size;
}graph;
graph G;
int size,ind=0;
int h_size=0;
graph* buildAdjList(const char* file,graph* G,int size)
{
    FILE *f=fopen("adj.txt","r");
    G->size=size;
    G->list=(vertex **)malloc(sizeof(vertex*)*size);
    vertex *v;
    int i,j;
    for(i=0;i<size;i++)
    {
        v=(vertex*)malloc(sizeof(vertex));
        v->parent=0;
        v->key=INT_MAX;
        v->name=getc(f);
        fscanf(f,"(%d) ",&v->degree);
        //printf("%d",v->degree);
        v->adj=(char*)malloc(sizeof(char)*(v->degree));
        v->wt=(int*)malloc(sizeof(int)*(v->degree));
        for(j=0;j<v->degree;j++)
        {
            v->adj[j]=getc(f);
            fscanf(f,"%d ",&v->wt[j]);
        }
        fscanf(f,"\n");
        G->list[i]=v;
    }
    return G;
}
void showAdjList(graph *G)
{
    vertex *v;
    int i,j;
    for(i=0;i<G->size;i++)
    {
        v=G->list[i];
        printf("%c [%d] ",v->name,v->degree);
        for(j=0;j<v->degree;j++){
            printf("%c",v->adj[j]);
            printf("%d ",v->wt[j]);
        }
        printf("\n");
    }
}
void Min_heapify(vertex **a,int i)
{
    int l=2*i+1,smallest;
    int r=2*i+2;
    if(l<h_size&&a[l]->key<a[i]->key)
        smallest=l;
    else
        smallest=i;
    if(r<h_size&&a[r]->key<a[smallest]->key)
    {
        smallest=r;
    }
    if(smallest!=i)
    {
        vertex *temp=a[i];
        a[i]=a[smallest];
        a[smallest]=temp;
        Min_heapify(a,smallest);
    }
}
void enque_min(vertex **h,vertex *k)
{
    if(h_size>=size)
    {
        printf("\nOverflow\n");
    }
    else
    {
        //int x;
        /*printf("enter the data: ");
        scanf("%d",&x);*/
        h_size++;
        ind=h_size-1; vertex *temp;
        h[ind]=k;
        int parent=(int)(floor((ind-1)/2.0));
        while((ind>0) && (h[parent]->key>h[ind]->key))
        {
            temp=h[parent];
            h[parent]=h[ind];
            h[ind]=temp;
            ind=parent;
            parent=(int)(floor((ind-1)/2.0));
        }
    }
}
void decrease_key(vertex **h,vertex *k,int j)
{
    vertex *temp;
    //k.key=i;
    int i,flag=0;
    for(i=0;i<h_size;i++)
    {
        if(h[i]->name==k->name && h[i]->key>j){
                h[i]->key=j; flag=1;
                break;
        }
    }
    if(flag ==1){
    int parent=(int)(floor((i-1)/2.0));
    if(i==0)
        parent=0;
    while((h[parent]->key>h[i]->key)&&(i>0))
        {
            temp=h[parent];
            h[parent]=h[i];
            h[i]=temp;
            i=parent;
            parent=(int)(floor((i-1)/2.0));
            if(i==0)
                parent=0;
        }
    }
}
void dequeue(vertex **h){
    ind=h_size-1;
    if(h_size==0)
        printf("\nUnderflow\n");
    else
    {
        vertex *temp;
        //printf("element deleted: %c\n",h[0]->name);
        temp=h[0];
        h[0]=h[ind];
        h[ind]=temp;
        h_size-=1;
        Min_heapify(h,0);
    }
}
void print_arr(vertex *s)
{
    printf("Shortest dist from %c\n",s->name);
    int i;
    for(i=1;i<size;i++)
    {
        printf("%c - %d, ",G.list[i]->name,G.list[i]->key);
    }
}
void dijkstra(vertex *s)
{
    int i,j,flag=0;
    s->key=0;
    s->parent=0;
    vertex **Q=(vertex **)calloc(G.size,sizeof(vertex *));
    for(i=0;i<size;i++)
        enque_min(Q,G.list[i]);

    vertex *u,*v;
    while(h_size>0)
    {
        u=Q[0];
        //printf("%c \n",u->name);
        dequeue(Q);
        for(i=0;i<u->degree;i++)
        {
            v=G.list[u->adj[i]-'a'];
            flag=0;
            for(j=0;j<h_size;j++)
            {
                if(Q[j]->name == v->name){
                    flag=1;break;
                }
            }
            if(flag==1 && u->key!=INT_MAX && (u->wt[i]+u->key)<v->key){
                    v->key=u->wt[i]+u->key;
                    decrease_key(Q,v,v->key);
            }

        }
    }
    print_arr(s);
}
int main()
{
    printf("enter the no. of vertices: ");
    scanf("%d",&size);
    buildAdjList("adj.txt",&G,size);
    showAdjList(&G);
    dijkstra(G.list[0]);
    return 0;
}
