// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

int solve(){
	string str1, str2;
	cin >> str1 >> str2;
	for(int i = str1.length(); i > 0; --i){
		if(tolower(str1[i]) < tolower(str2[i])) return -1;
		else if(tolower(str1[i]) > tolower(str2[i])) return 1;
	}
	return 0;
}

int main(){
	cout << ("aslkjlkasdd" < "asdlkjdajwi"); 
	// failed
	return 0;
}