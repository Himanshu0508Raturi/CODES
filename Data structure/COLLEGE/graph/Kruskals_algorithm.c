// used to find the minimum spanning tree.
#include <stdio.h>
#include <stdlib.h>
typedef struct edge
{
    int source;
    int destination;
    int weight;
} edge;
typedef struct node
{
    int vertex;
    struct node *next;
} node;
typedef struct graph
{
    int numVertex;
    int NumEdge;
    int *parent;
    node **adjlist;
    edge *edge;
} graph;
node *createNode(int ver)
{
    node *v = (node *)malloc(sizeof(node));
    v->vertex = ver;
    v->next = NULL;
    return v;
}
graph *createGraph(int Nver, int Nedge)
{
    graph *g = (graph *)malloc(sizeof(graph));
    g->numVertex = Nver;
    g->NumEdge = Nedge;
    g->adjlist = (node **)malloc(sizeof(node *) * Nver); // confusion in Nver or Nedge.
    g->parent = (int *)malloc(sizeof(int) * Nver);
    g->edge = (edge *)malloc(sizeof(edge) * Nedge);
    for (int i = 0; i < Nver; i++)
    {
        g->adjlist[i] = NULL;
        g->parent[i] = i;
    }
    return g;
}
void addEdge(graph *g, int src, int dest)
{
    node *newNode = createNode(src);
    newNode->next = g->adjlist[dest];
    g->adjlist[dest] = newNode;

    node *newNode1 = createNode(dest);
    newNode1->next = g->adjlist[src];
    g->adjlist[src] = newNode1;
}
void sortEdge(edge arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].weight > arr[j + 1].weight)
            {
                edge temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int findParent(int parent[], int vertex)
{
    if (parent[vertex] != vertex)
    {
        parent[vertex] = findParent(parent, parent[vertex]);
    }
    return parent[vertex];
}
void doUnion(int parent[], int src, int dest)
{
    parent[dest] = src;
}
void kruskal(graph *g)
{
    // step1 sort all edges acc to weight.
    sortEdge(g->edge, g->NumEdge);
    int sortEdgeCount = 0, resCount = 0, weight = 0;
    edge *res = (edge *)malloc(sizeof(edge) * g->numVertex - 1);

    while (resCount < g->numVertex - 1 && sortEdgeCount < g->NumEdge)
    {
        // step2 pick a edge from sorted edge array and find the parents of src and dest.
        edge a = g->edge[sortEdgeCount++];
        int parent_of_source = findParent(g->parent, a.source);
        int parent_of_dest = findParent(g->parent, a.destination);
        // if their parent are defferent add it to ans to make MST and and weight to weight variable.
        if (parent_of_source != parent_of_dest)
        {
            res[resCount++] = a;
            weight += a.weight;
            // step3 do union of nodes after adding it to ans.
            doUnion(g->parent, parent_of_source, parent_of_dest);
        }
    }

    // printing MST
    printf("Source ----> Destination: Weight. \n");
    for (int i = 0; i < g->numVertex - 1; i++)
    {
        printf("%d ----> %d : %d.\n", res[i].source, res[i].destination, res[i].weight);
    }
    printf("Total Weight of MST: %d \n",weight);
}
void main()
{
    int edg, ver;
    printf("Enter Number of Edges and Vertices: ");
    scanf("%d %d", &edg, &ver);
    int src, dest, weight;
    graph *g = createGraph(ver, edg);
    for (int i = 0; i < edg; i++)
    {
        printf("Enter Source ----> Destination : weight for edge %d : ", i + 1);
        scanf("%d %d %d", &src, &dest, &weight);
        g->edge[i].source = src;
        g->edge[i].destination = dest;
        g->edge[i].weight = weight;
    }
    kruskal(g);
}