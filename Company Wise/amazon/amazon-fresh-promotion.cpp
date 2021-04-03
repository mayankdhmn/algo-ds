#include <bits/stdc++.h>
using namespace std;

int main(){
	vector < vector < string > > code_list = {{"apple", "apple"}, {"banana", "anything", "banana"}};
	vector < string > shopping_list = {"orange", "apple", "apple", "banana", "orange", "banana"};

	int i = 0, j = 0;

	while (i < code_list.size() && (j + code_list[i].size() - 1) < shopping_list.size())
	{

		bool match = true;
		for (int k = 0; k < code_list[i].size(); k ++)
			match &= (code_list[i][k] == "anything" || code_list[i][k] == shopping_list[j + k]);
		if (match){
			j += code_list[i].size(); 
			i += 1;
		}else{
			j += 1;
		}
		cout << match << " " << i << " " << j << "\n";
	}

	if (i == code_list.size()){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}




}