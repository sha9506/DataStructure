class MyCircularDeque {
    private: 
        vector<int> dq;
        int front, rear, capacity, count;
    
    public:
        MyCircularDeque(int k) {
            dq.resize(k);
            front = 0;
            rear = k-1;
            capacity = k; 
            count = 0;
        }
        
        bool insertFront(int value) {
            if(isFull()) return false;
    
            front = (front - 1 + capacity) % capacity;
    
            dq[front] = value;
            count++;
            return true;
        }
        
        bool insertLast(int value) {
            if(isFull()) return false;
    
            rear = (rear+1) % capacity;
            dq[rear] = value;
            count++;
            return true;
        }
        
        bool deleteFront() {
            if(isEmpty()) return false;
    
            front = (front+1) % capacity;
            count--;
            return true;
        }
        
        bool deleteLast() {
            if(isEmpty()) return false;
    
            rear = (rear - 1 + capacity) % capacity;
            count--;
            return true;
        }
        
        int getFront() {
            return isEmpty()? -1 : dq[front];
        }
        
        int getRear() {
            return isEmpty()? -1 : dq[rear];
        }
        
        bool isEmpty() {
            return count == 0;
        }
        
        bool isFull() {
            return count == capacity;
        }
    };
    
    /**
     * Your MyCircularDeque object will be instantiated and called as such:
     * MyCircularDeque* obj = new MyCircularDeque(k);
     * bool param_1 = obj->insertFront(value);
     * bool param_2 = obj->insertLast(value);
     * bool param_3 = obj->deleteFront();
     * bool param_4 = obj->deleteLast();
     * int param_5 = obj->getFront();
     * int param_6 = obj->getRear();
     * bool param_7 = obj->isEmpty();
     * bool param_8 = obj->isFull();
     */