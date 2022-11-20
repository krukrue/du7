#include "WarshallAlg.h"

vector<vector<int>> Warshall::WarshallStart() {
	vector<vector<vector<int>>> temp;
	for (int i = 0; i < vect.size(); i++) {
		temp.push_back(vect);
	}
	for (int k = 1; k < temp.size(); k++) {
		for (int i = 0; i < temp.size(); i++) {
			for (int j = 0; j < temp.size(); j++) {
				temp[k][i][j] = (temp[k - 1][i][j] | (temp[k - 1][i][k] & temp[k - 1][k][j]));
			}
		}
	}
	vect = temp[temp.size() - 1];
	return vect;
}

void Warshall::printWarshall() {
	for (int i = 0; i < vect.size(); i++) {
		for (int j = 0; j < vect.size(); j++) {


			cout << vect[i][j] << ' ';


		}
		cout << endl;
	}
}