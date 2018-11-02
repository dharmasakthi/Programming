# include <iostream>
using namespace std;
int ssp,node,source;
//ssp is last min cost node
// node is the number of nodes
// source distance is 0 all nodes are destination
int minimum(int distance[],bool sspath[]);
int main()
{
  cout << "\tDijkstra’s shortest path algorithm" << endl;
  cout << "Enter nodes: ";
  cin >> node;
  int c_matrix[node][node],distance[node],min;
  //c_matrix is the cost of edge between the nodes
  //there is no edge assing it to 99 (large value)
  //distance[]  is matrix contain the min path from source to i
  //initially diatance[] = 99 (large value)
  bool sspath[node];// it is true when the particular nodes assign a minimum path
  cout << "Cost of edges:\n";
  for(int i=0;i<node;i++)
  {
    for(int j=0;j<node;j++)
    {
        cin >> c_matrix[i][j];
        distance[i] = 99; // set all
        sspath[i] = false;
        if(c_matrix[i][j] == 0)
          c_matrix[i][j] = 99;
    }
  }
    cout << "Enter source node:";
    cin >> source;
    distance[source]=0;
    for(int j=0;j<node;j++)
    {
      min = minimum(distance,sspath);
      //min is to find the min path from the source
      for(int k=0;k<node;k++)
      {
        if(!sspath[k])
          if(min+c_matrix[ssp][k] < distance[k])
            //comparision and assign the sp
            distance[k] = min+c_matrix[ssp][k];
      }
    }
    for(int i=0;i<node;i++)
    {
      //display the sp
      cout << "Shortest Path " << source << " - " << i << ": ";
      cout << distance[i] << endl;
    }
  return 0;
}
int minimum(int distance[],bool sspath[])
{
  int min = 99;
  for(int i=0;i<node;i++)
  {
    if(!sspath[i])
    {
      if(min > distance[i])
      {
        min = distance[i];
        ssp=i;
      }
    }
  }
  //ssp is the sortest path node from source
  sspath[ssp] = true;
  // make it as true when its sp is found
  return min;
}
