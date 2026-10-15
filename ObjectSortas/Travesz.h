#ifndef PRZECHODZENIE_H
#define PRZECHODZENIE_H
// jesli nie zdefiniowany, to zdefiniuj jako PRZECHODZENIE_H
// pragma once mowi kompilatorowi zeby zalozyl ten plik tylko raz podczas kompilacji danego zrodla
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Travesz
{
private:
	vector<vector<pair<int, int>>> v;

	int n;
	vector<bool> vis;

	void dfsLauncher(int x);

public:
	Travesz(const vector<vector<pair<int, int>>>& V);

	void dfs(int start);
	void bfs(int start);
	void dickstra(int start);
};

#endif
