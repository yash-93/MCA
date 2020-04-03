// Fractional Knapsack
struct Item
{
    int value, weight;
};
double fractionalKnapsack(int W, Item arr[], int n);

// Job Sequencing
struct Job{
    char id;
    int dead;
    int profit;
};

void jobSequencing(Job arr[], int n);

//Prims Algorithm
#define V 5
void primsMST(int graph[V][V]);

//Kruskals Algorithm

