#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
#define INF 99999

class Warshall
{
public:
	vector<vector<int>> vect;
	Warshall(vector<vector<int>> VECT) {
		vect = VECT;
	}
	vector<vector<int>> WarshallStart();

	void printWarshall();
};
