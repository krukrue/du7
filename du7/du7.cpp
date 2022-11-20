#include <iostream>
#include "WarshallAlg.h"
#include <vector>
#define INF 99999

using namespace std;

int main()
{
    vector<vector<int>> vect = { { 0, 1, 0, 0 },
                    { 0, 0, 0, 1 },
                    { 0, 0, 0, 0 },
                    { 1, 0, 1, 0 } };
    Warshall floyd(vect);
    vect = floyd.WarshallStart();
    floyd.printWarshall();
    cout << endl;
    vector<vector<int>> vect1 = { { 0, 1, 0, 0 },
                { 0, 1, 0, 1 },
                { 0, 0, 1, 0 },
                { 1, 0, 1, 0 } };
    Warshall floyd1(vect1);
    vect = floyd1.WarshallStart();
    floyd1.printWarshall();
    cout << endl;
    vector<vector<int>> vect2 = { { 0, 1, 1, 0 },
                { 0, 1, 0, 1 },
                { 0, 0, 1, 0 },
                { 1, 0, 0, 0 } };
    Warshall floyd2(vect2);
    vect = floyd2.WarshallStart();
    floyd2.printWarshall();
    cout << endl;
    vector<vector<int>> vect3 = { { 0, 1, 0, 0 },
                { 0, 1, 0, 1 },
                { 1, 0, 0, 0 },
                { 1, 0, 1, 0 } };
    Warshall floyd3(vect3);
    vect = floyd3.WarshallStart();
    floyd3.printWarshall();
    cout << endl;
    vector<vector<int>> vect4 = { { 0, 1, 0, 0 },
                { 1, 0, 0, 1 },
                { 1, 0, 1, 1 },
                { 1, 0, 0, 0 } };
    Warshall floyd4(vect1);
    vect = floyd4.WarshallStart();
    floyd4.printWarshall();
}
