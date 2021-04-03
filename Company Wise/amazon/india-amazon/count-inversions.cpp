#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template <class type1>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;

int Solution::countInversions(vector<int> &A) {
    ordered_multiset < int > pre;
    int result = 0;
    for (int i = 0; i < int(A.size()); i ++){
        result += pre.size() - pre.order_of_key(A[i] + 1);
        pre.insert(A[i]);
    }
    return result;
}
