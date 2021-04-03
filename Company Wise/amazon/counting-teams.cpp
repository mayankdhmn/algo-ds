#include <bits/stdc++.h>
using namespace std;

int fact(int n) { 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 


int choose(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  

int main(){
	int num = 6;
	vector < int > skills = {12, 4, 6, 13, 5, 10};
	int minAssociates = 3;
	int minLevel = 4;
	int maxLevel = 10;


	int l = -1, r = -1;
	sort(skills.begin(), skills.end());
	for (int i = 0; i < skills.size(); i ++){
		if (skills[i] >= minLevel){
			l = i;
			break;
		}
	}
	for (int i = skills.size() - 1; i >= 0; i --){
		if (skills[i] <= maxLevel){
			r = i;
			break;
		}
	}
	if (l == -1 || r == -1){
		return 0;
	}
	int good = r - l + 1;
	int result = 0;
	for (int i = minAssociates; i <= good; i ++){
		result += choose(good, i);
	}
	cout << result << "\n";
	return 0;

	// return result;
}