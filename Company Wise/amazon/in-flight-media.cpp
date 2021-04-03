// In Flight Media

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int flightDuration, movieSize;
	cin >> flightDuration >> movieSize;
	int movieDuration[movieSize];
	for (int i = 0; i < movieSize; i ++) cin >> movieDuration[i];
	int required = flightDuration - 30;
	map < int, int > sizeVsID;
	pair < int, int > result = {-1, -1};
	vector < pair < int, int > > sorted_duration; 
	for (int i = 0; i < movieSize; i ++) sorted_duration.push_back({movieDuration[i], i});
	sort(sorted_duration.begin(), sorted_duration.end());
	for (int i = 0; i < movieSize; i ++){
		int needed = required - sorted_duration[i].first;
		if (sizeVsID.find(needed) != sizeVsID.end()){
			/* cout << i << "\n"; */
			result.first = min(sizeVsID[needed], sorted_duration[i].second);
			result.second = max(sizeVsID[needed], sorted_duration[i].second);
		}
		sizeVsID[sorted_duration[i].first] = sorted_duration[i].second;
	}
	cout << result.first << " " << result.second << "\n";

}

