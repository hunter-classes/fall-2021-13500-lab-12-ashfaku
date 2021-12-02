#include "funcs.h"
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
void printVector(const vector<int> &p)
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
	cout << "The goodVibes vector: ";
	printVector(goodVibes(p));
}
void printFusion(vector<int> &goku, vector<int> &vegeta)
{
	cout << "The first fusion component is: ";
	printVector(goku);
	cout << "The second fusion component is: ";
	printVector(vegeta);
	cout << "And now they've fused, leaving first component with all elements combined and second component empty" << endl;
	gogeta(goku, vegeta);
	cout << "The first fusion component now is: ";
	printVector(goku);
	cout << "And the second fusion component's size is " << vegeta.size() << endl;
}
int main()
{
	cout << "Task A: makeVector(int n)" << endl;
	printMakeVector(10);
	printMakeVector(5);
	printMakeVector(7);

	cout << "Task B: goodVibes(const vector<int> &p)" << endl;
	vector<int> t{1,2,3,-4,-5,-10,6}, t1{0,-9,2,3,4,-2, 4,-100,4};
	printGoodVibes(t);
	printGoodVibes(t1);
	cout << "Task C: gogeta function" << endl;
	printFusion(t, t1);
	vector<int> s{1,2,3,4,5,6}, s1{7,8,9,10,11};
	printFusion(s, s1);

	return 0;

}
