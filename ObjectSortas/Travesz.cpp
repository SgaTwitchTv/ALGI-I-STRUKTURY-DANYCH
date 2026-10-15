#include "Travesz.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

Travesz::Travesz(const vector<vector<pair<int, int>>>& V)
{
	v = V;
	n = V.size();
	vis.resize(n, false);
}

void Travesz::dfs(int x)
{
	vis[x] = true;

	cout << x << " ";

	for (auto i : v[x])
	{
		if (!vis[i.first])
		{
			dfs(i.first);
		}
	}
}

void Travesz::dfsLauncher(int start)
{
	fill(vis.begin(), vis.end(), false);

	dfs(start);
}

void Travesz::bfs(int start)
{

}

void Travesz::dickstra(int start)
{

}