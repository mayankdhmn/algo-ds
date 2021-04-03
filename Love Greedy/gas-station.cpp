// If a car cant reach A from B, it can't reach A from any point in between
// If total gas is less than total cost no solution

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	int N = gas.size(), total_gas = 0, total_cost = 0;
	for (int i = 0; i < N; i ++){
	    total_gas += gas[i];
	    total_cost += cost[i];
	}
	if (total_gas < total_cost)
	    return -1;
	// Now there exists a solution
	// Consider solution to be 0, if it fails from 0 at some point
	// make the i + 1 as next solution. 
	// thus keep on checking for all solutions.
	int tank = 0, result = 0;
	for (int i = 0; i < N; i ++){
	    tank += (gas[i] - cost[i]);
	    if (tank < 0){
		result = i + 1;
		tank = 0;
	    }
	}
	return result;
}
