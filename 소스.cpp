#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> rickStk;
	vector<int> ans;
	vector<int> ans2;
	int loop;
	cin >> loop;
	string order;
	int obj;
	for (int i = 0; i < loop; i++)
	{
		cin >> order;
		cout << i << endl;
		if (order == "push") {
			cin >> obj;
			rickStk.push_back(obj);
		}
		else if (order == "pop") {
			ans.push_back( rickStk.empty() ? -1 : rickStk.back());
			if(!rickStk.empty())
				rickStk.pop_back();
		}
		else if (order == "size") {
			ans.push_back(rickStk.size());
		}
		else if (order == "empty") {
			ans.push_back(rickStk.empty() ? 1:0);

		}
		else if (order == "top") {
			ans.push_back(rickStk.empty() ? -1 : rickStk.back());
		}

	}
	cout << "³¡!" << endl;
	while (!ans.empty()) {
		ans2.push_back(ans.back());
		ans.pop_back();
	}
	while (!ans2.empty()) {
		cout << ans2.back();
		ans2.pop_back();
	}

}


