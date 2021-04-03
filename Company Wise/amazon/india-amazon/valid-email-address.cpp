// Given a string convert it into a valid address by inserting a ‘.’ after www 
// then insert a ‘.’ before com and if there are more characters after com then 
// put a ‘/’ after com and then the rest of the characters.

#include <bits/stdc++.h>
using namespace std;

int main(){
	string A; cin >> A;
	int ix;
	string curr;
	for (int i = 0; i < int(A.size()); i ++){
		curr += A[i];
		if (curr.size() >= 3 && curr.substr(curr.size() - 3) == "www"){
			ix = i;
			break;
		}
	}
	A.insert(A.begin() + ix + 1, '.');
	cout << A << "\n";
	ix = -1;
	curr = "";
	int iy = -1;
	bool extra = false;
	for (int i = A.size() - 1; i >= 0; i --){
		curr += A[i];
		if (curr.size() >= 3 && curr.substr(curr.size() - 3) == "moc"){
			ix = i;
			iy = ix + 3;
			if (iy != A.size())
				extra = true;
			break;
		}
	}
	A.insert(A.begin() + ix, '.');
	if (extra)	A.insert(A.begin() + iy + 1, '/');
	cout << A << "\n";
}