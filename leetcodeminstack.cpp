class MinStack {
    /** initialize your data structure here. */
public:
    vector<int> v;
    int min;
    MinStack() {
        min = INT_MAX;
        
    }  
    void push(int x) {
        v.push_back(x);
        if(x < min)
        {
            min = x;
        }
    }
    
    void pop() {
        if(top()==min)
        {
            if(v.size()==1)
            {
                min=INT_MAX;
            }
            else
            {
                min = v[0];
            }
            for(int i=0; i< v.size()-1;i++)
            {
                if(v[i]< min)
                {
                    min = v[i];
                }
            }
        }
        v.pop_back();
        
    }
    
    int top() {
        return v[v.size()-1];
        
    }
    
    int getMin() {
        return min;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */==