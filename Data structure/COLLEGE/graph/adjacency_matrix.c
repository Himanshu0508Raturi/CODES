// adjacency matrix to represent graph.
#include <stdio.h>
void creategraph(int adjmat[][6], int ver)
{
    for (int i = 0; i < ver; i++)
    {
        for (int j = 0; j < ver; j++)
        {
            adjmat[i][j] = 0;
        }
    }
}
void addedge(int adjmat[][6], int start, int end)
{
    adjmat[start][end] = 1;
}
void printGraph(int graph[6][6], int vertices)
{
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int vertex = 6;
    int adjmat[6][6];
    creategraph(adjmat, vertex);

    addedge(adjmat, 1, 2);
    addedge(adjmat, 1, 4);
    addedge(adjmat, 2, 4);
    addedge(adjmat, 2, 1);
    addedge(adjmat, 2, 3);
    addedge(adjmat, 3, 5);
    addedge(adjmat, 3, 2);
    addedge(adjmat, 3, 4);
    addedge(adjmat, 4, 2);
    addedge(adjmat, 4, 3);
    addedge(adjmat, 4, 5);
    addedge(adjmat, 5, 3);
    addedge(adjmat, 5, 4);
    printGraph(adjmat, vertex);
}