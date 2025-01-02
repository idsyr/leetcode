class MyQueue {
    list<int> l;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        l.push_back(x);
    }
    
    int pop() {
        int temp = *l.begin();
        l.pop_front();
        return temp;
    }
    
    int peek() {
        int temp = *l.begin();
        return temp;
    }
    
    bool empty() {
        if(l.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */