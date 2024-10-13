#include<bits/stdc++.h>
using namespace std;

int main() {
	string str ;
	cin >> str ;
	string str_rev ;
	for (int i = str.size() - 1 ; i >= 0 ; --i) {
		str_rev.push_back(str[i]) ;
	}
	cout << str_rev ;
}