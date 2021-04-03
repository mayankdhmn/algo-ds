#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector < string > foo(string A){
	vector < string > ret;
	string curr;
	for (int i = 0; i < int (A.size()); i ++){
		if (A[i] != ' '){
			curr += A[i];
		}
		else{
			ret.push_back(curr);
			curr = "";
		}
	}
	if (curr != "") ret.push_back(curr);
	return curr;
}

int main(){
	string A;
	vector < string > words = foo(A);
	// Find the maximum freq and all the strings with that freq 
}