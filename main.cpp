#include "funcs.h"
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
void printVector(vector<int> &p)
{
	for (int i : p)
		cout << i << " ";
	cout << endl;
}
void printMakeVector(int n)
{
	vector<int> p = makeVector(n);
	cout << "Length of " << n << ": ";
	printVector(p);
}
void printGoodVibes(const vector<int> &p)
{
	cout << "The original vector: ";
	printVector(p);
}
int main()
{
	cout << "Task A: makeVector(int n)" << endl;
	printMakeVector(10);
	printMakeVector(5);
	printMakeVector(7);

	cout << "Task B: goodVibes(const vector<int> &p)" << endl;
	vector<int> t{1,2,3,-4,-5,-10,6};
	

	return 0;

}
