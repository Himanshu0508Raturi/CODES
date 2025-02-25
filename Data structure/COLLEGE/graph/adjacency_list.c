#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int vertex;
    struct node *next;
} node;
typedef struct graph
{
    int numvertex;
    node **adjlist;
} graph;
node *createNode(int ver)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->vertex = ver;
    temp->next = NULL;
    return temp;
}
graph *createGraph(int Numvertex)
{
    graph *g = (graph *)malloc(sizeof(graph));
    g->numvertex = Numvertex;
    g->adjlist = (node **)malloc(Numvertex * sizeof(node *));
    for (int i = 1; i <= Numvertex; i++)
    {
        g->adjlist[i] = NULL;
    }
    return g;
}
void addEdge(graph *g, int src, int dest)
{
    node *newNode = createNode(dest);
    newNode->next = g->adjlist[src];
    g->adjlist[src] = newNode;

    // node *new_Node = createNode(src);
    // newNode->next = g->adjlist[dest];
    // g->adjlist[dest] = new_Node;
}
void printGraph(graph *g)
{
    for (int i = 1; i <= g->numvertex; i++)
    {
        node *temp = g->adjlist[i];
        printf("%d->", i);
        while (temp != NULL)
        {
            printf("%d->", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void main()
{
    graph *g = createGraph(5);
    addEdge(g, 1, 2);
    addEdge(g, 1, 4);
    //addEdge(g, 2, 1);
    addEdge(g, 2, 3);
    addEdge(g, 2, 4);
   // addEdge(g, 3, 2);
    addEdge(g, 3, 4);
    addEdge(g, 3, 5);
    // addEdge(g, 4, 1);
    // addEdge(g, 4, 2);
    // addEdge(g, 4, 3);
    addEdge(g, 4, 5);
    //addEdge(g, 5, 3);
    addEdge(g, 5, 4);

    printGraph(g);
}