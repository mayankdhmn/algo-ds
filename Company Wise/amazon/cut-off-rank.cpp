int main(){
	int rank = 1, pos = 1;
	sort(scores.begin(), scores.end());
	for (int i = num - 1; i >= 0; i --){
		if (i == num - 1 || scores[i] != scores[i + 1]){
			rank = pos;
			if (rank > cutOffRank || scores[i] == 0)
				return pos - 1;
		}
		pos += 1;
	}
	return num;
}

// https://leetcode.com/discuss/interview-question/890290/