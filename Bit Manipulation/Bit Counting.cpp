// Brian Kurningham Algorithm

int pop_count(int n) {
	int result = 0;
	while (n) {
	    n &= (n - 1);
	    ++ result;
	}
	return result;
}
