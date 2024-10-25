class Solution{
public:
    bool check(string s){
        string stk;
        for(char c:s) {
            if(c=='('||c=='{'||c=='[')
                stk.push_back(c); 
            else if(stk.empty()||!ktra(stk.back(),c))
                return false;
            else
                stk.pop_back(); 
        }
        return stk.empty();
    }
    bool ktra(char l,char r){
        return(l=='('&&r==')')|| 
               (l=='['&&r ==']')|| 
               (l=='{'&&r =='}');
    }
};
