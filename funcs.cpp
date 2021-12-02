#include <vector>
#include "funcs.h"
using std::vector;
vector<int> makeVector(int n)
{
	vector<int> r;
	for (int i = 0; i < n; i++)
		r.push_back(i);
	return r;
}
vector<int> goodVibes(const vector<int> &v)
{
	vector<int> r;
	for (int i: v)
		if (i > 0)
			r.push_back(i);
	return r;
}
void gogeta(vector<int> &goku, vector<int> &vegeta) // vegito they should've said
{
	for (int i : vegeta)
		goku.push_back(i);
	vegeta.clear();
}
