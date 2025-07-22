#include <bits/stdc++.h>
using namespace std;
#define ll long long;
class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }
    }
    int findUltimateParent(int i)
    {
        if (parent[i] == i)
        {
            return i;
        }
        else
        {
            return parent[i] = findUltimateParent(parent[i]);
        }
    }
    void unionByRank(int u, int v)
    {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            // Smaller ranked will go and get attached to the bigger one
            // Getting attached means that now parent of u will be v
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    if(ds.findUltimateParent(3) == ds.findUltimateParent(4)){
        cout << "Same" << endl;
    }else{
        cout << "Not same" << endl;
    }
    ds.unionByRank(3, 7);
    if (ds.findUltimateParent(3) == ds.findUltimateParent(4))
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
    return 0;
}
