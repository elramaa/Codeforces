// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	int x = 0;
	string prog;
	cin >> n;
	while(n > 0){
		cin >> prog;
		(prog == "++X" || prog == "X2++") ? ++x : --x;
		--n;
	}
	cout << x;
}