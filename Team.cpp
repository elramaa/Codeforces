// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, solution, a, b, c;
	cin >> n;
	while(n > 0){
		cin >> a >> b >> c;
		if(a+b+c >= 2) ++solution;
		--n;
	}
	cout << solution;
}