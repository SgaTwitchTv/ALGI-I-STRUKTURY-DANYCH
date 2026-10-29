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
	queue<int> q;
	q.push(start);
	vis[start] = true;
	
	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		cout << curr << " ";
			
		for (auto i : v[curr])
		{
			if (!vis[i.first])
			{
				vis[i.first] = true;
				q.push(i.first);
			}
		}
	}
}

void Travesz::dickstra(int start)
{

}