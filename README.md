# Problems
<codes>

# 1.Organizing Containers of Balls
David has n containers and n different types of balls, both of which are numbered from 0 to n-1. The distribution of ball types per container are described by an n x n matrix of integers, M, where each Mc,t is the number of balls of type t in container c.For example, consider the following diagram for M= [[1,4],[2,3]]:
In a single operation, David can swap two balls located in different containers (i.e., one ball is moved from container ca to cb and the other ball is moved from cb to ca).
David wants to perform some number of swap operations such that both of the following conditions are satisfied:
Each container contains only balls of the same type.
No two balls of the same type are located in different containers.
You must perform q queries where each query is in the form of a matrix, M. For each query, print Possible on a new line if David can satisfy the conditions above for the given matrix; otherwise, print Impossible instead.
