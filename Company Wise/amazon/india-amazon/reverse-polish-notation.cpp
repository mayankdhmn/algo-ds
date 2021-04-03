int evalRPN(vector<string>& tokens) {
    stack < int > stk;
    set < string > symbols = {"+", "-", "*", "/"}; 
    for (auto& t : tokens){
        if (symbols.find(t) == symbols.end()){
            stk.push(stoi(t));
        }else{
            int B = stk.top();
            stk.pop();
            int A = stk.top();
            stk.pop();
            if (t == "+"){
                stk.push(A + B);
            }else if (t == "-"){
                stk.push(A - B);
            }else if (t == "/"){
                stk.push(A / B);
            }else if (t == "*"){
                stk.push(A * B);
            }
        }
    }
    return stk.top();