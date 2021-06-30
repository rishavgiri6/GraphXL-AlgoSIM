# GraphAlgorithms
Contains my school or collegiate level graph/greedy/dynamic source codes.

I. INTRODUCTION
Graph an order triple G = (V, E, F) Here V nodes, a set of points or vertices, E is a set whose elements are
known as edges or lines, f maps each element of the function E Vertex v is a basic element in the corner for the
couple who is disorganized or a node is designed as a point. Vertex G sets usually V (G), or V marked. A line
connecting the two corners, the corner is called, or prepared as closing - and the edge is a set of two elements. G
side of the set, usually E (G) or G network is marked by hundreds of years has been used in a variety of
applications. In the realm of mathematics, we better visually through graphs can describe these networks. A
graph of a group or set of objects, called the corner, some of the corners are connected by links, also known as
the edges are represented. 
![image](https://user-images.githubusercontent.com/26641017/123900011-e4f3e900-d985-11eb-98b6-b7c08c4effc5.png)

II. UNDIRECTED UNWEIGHTED GRAPH
In this type of graph the direction between vertices and distance will not be shown on the edges. If there exist a
root to Vi to Vj is necessary that ,there will be root from Vj to Vi. In this type of graph the distance between the
vertices will be shown on the edges but not direction there is example of this type of graph is prims minimum
spanning tree graph algorithm.

![image](https://user-images.githubusercontent.com/26641017/123900061-f9d07c80-d985-11eb-9490-d131488b45c7.png)

2.1 Prims Alorithm
The prism algorithm is basically use for the find the minimum distance between the vertices and find the
shortest path between them the working of the algorithm is as simple as we can easily do it in any way as we all
know that it is a greedy algorithm so it can find that way which is the smallest from the other so it greed them as
a first preference than it can do again that process and do it again[11]. As we all know that this paper is in the
finding the better algorithm between the all so this is also a very good algorithm in the field of the networking.
The other similar type of algorithm which work on the same principle in which prims algorithm work is the
kruskal minimum spanning tree algorithm which is also used to finding out the minimum distance and based on
the greedy algorithm. Only difference is that it is some more time consuming and more accurate than prims
algorithm.
There is one more algorithm in the minimum spanning tree family that is the reverse delete algorithm which is
also a greedy algorithm basically it work on the reverse of the kruskal’s algorithm that make a deep impact on
this types of algorithm that it has a huge advantage on it is used for clearing the mistakes which is happening in
the kruskal algorithm its start in end of the graph and delete edges and again change the values of the algorithm
so in networking its effect more that it has been send of the last edge as well.


III. DIRECTED UNWEIGHTED GRAPH
In this type of graph the direction will be shown on the edges but not distance.

Directional Weighted Graph
In this type of graph both direction and distance will be shown on the edges.

3.1 Breath First Traversal

 In this algorithm first we will create the graph, depending upon the type of graph set the flag=1 if it is directed
otherwise set the flag=0 if it is undirected. Then Start the traversal from any vertex say Vi and mark the
corresponding index position of the visited array as 1 and move the vertex to the queue.[12]. After that visit the
vertex Wi, which is adjacent to Vi and mark the corresponding index position of visited array as 1 and move the
vertex to the queue. Repeat the previous step, till all the adjacent vertices of Vi are visited. On reaching a vertex,
whose all adjacent vertices visited, go back to the vertex whichever is having unvisited and repeat the third line
and previous line of this algorithm. Repeat the third line,fourth line and fifth line till all the vertices are visited.
If all the index position of the visited array becomes 1, stop the traversal and display the queue elements.

3.2 Depth First Traversal (DFT)

In this algorithm we will also create the graph and depending upon the type of graph set the flag 1 if it is
directed otherwise set the flag 0 if it is undirected. Then Start the Traversal from any vertex say Vi and mark the
corresponding index position of visited array as 1 and push the vertex to the stack. After that visit the vertex Wi,
which is adjacent to Vi and mark the corresponding index position of visited array as 1 and push the vertex to
the stack. Repeat previous line for every recently visited vertex Wi. And next step is third line and Fourth line
till all the vertices are visited. On reaching a vertex whose all adjacent vertices are visited , go back the vertex
which ever having unvisited and repeat line no fourth and five. If all the index position of visited array becomes
1, stop the traversal and display the stack elements.

3.2 Shortest Path Algorithm

There are many steps to find out the shortest path which are as following as in graph the shortest path are
basically use for find the shortest route b/w the two different path. The first step of this algorithms is to start the
traversal from any vertex . Basically there are two types of the shortest path algorithm 1st is the Bellman-Ford
algorithm and 2nd is the Dijkstra’s algorithm we will see both the algorithm in paper[11].
 Bellman-Ford shortest Path algorithm:- This algorithm is basically used for finding the shortest path
between the two or more than two vertices it work like dijkstra’s shortest path algorithm but
Bellman –ford algorithm is much slower than the dijkstra ‘s to finding the shortest route. This
algorithm is first proposed by the shimbel in 1955 but instead it named is Richard Bellman and Lester
ford jr. who firstly published this algorithm in 1958 and 1956.[17] This algorithm has a major
advantage that is it is able to detect negative edges or negative cycle which means its has a huge change
in it. But there are some drawback also like it is a old algorithm it is not abke to compete with other
algorithm and it is also much slower than the Dijkstra’s algorithm.
 Dijkstra’s shortest path algorithm[16].Dijkstra’s is also used for finding the shortest path between the
two or more than two vertices the vertices Vi and update the visited column as 1 in the Dijkstra's
table and also update the distance of vertices which are reachable from Vi only if the current distance
is less than previous distance. And the second step is to select any one unvisited vertex Wi which is
adjacent to Vi whose distance is less than all other unvisited vertices. After that Wi is visited, update
the distance of vertices which are reachable from Wi only if the current distance is less than the
previous distance. Repeat the previous step till all the vertices are visited. Construct Spanning Tree
from the final Dijkstra's table to compute the shortest distance from source to all other vertices.

![image](https://user-images.githubusercontent.com/26641017/123900093-094fc580-d986-11eb-9972-6791405759d8.png)

IV. CONCLUSION

After making a study in the above algorithm we have to make a conclusion so after making it n after studying
the shortest path graph algorithm is very much effective in the terms of the networking because it is well
elaborated and considering less error than the other algorithm we also evaluate it in term of time complexity of
all the algorithm some algorithm have better time complexity but in term of the network the shortest path
algorithm is much better than other algorithms.


REFERENCES
[1] Luigi P. Cordella, Pasquale Foggia, Carlo Sansone, and Mario Vento. A (sub) graph isomorphism algorithm
for matching large graphs.IEEE transactions on pattern analysis and machine intelligence, vol. 26, no. 10,
october 2004
[2] Richard M. Karp ,A study on the randomized algorithm data structure and algorithm a study on graph and
sorting.Discrete Applied Mathematics . 165-201 North-Holland . 1991
[3] Ahuja, R. K.Magnanti, T. L., and Orlin, J. B. Network Flows: Theory, Algorithms and Applications.
[4] R. E.Faster algorithms for the Shortest Path Problem.JournalofAssociation of Computing Machinery, 37,
213-223.1990
