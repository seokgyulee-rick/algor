#include<iostream>

using namespace std;

int N, M;
int* ary;
bool* check;
int biggest = 0;
int main()
{
	cin >> N >> M;

	ary = new int[N];
	check = new bool[N];

	for (int i = 0; i < N; i++)
	{
		cin >> ary[i];
		check[i] = false;
	}
	int time = 3;
}

void recur(int time, int pos) {
	if (time == 1) {
		return;
	}
	if(biggest + ary[pos]<= M)
	biggest += ;
	recur(time - 1, pos);
}