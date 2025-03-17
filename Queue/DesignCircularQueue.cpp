class MyCircularQueue {
    private:
        vector<int> q;
        int front, rear, capacity, count;
    
    public:
        MyCircularQueue(int k) {
            q.resize(k);
            front = 0;
            rear = -1;
            capacity = k;
            count = 0;
        }
    
        bool enQueue(int value) {
            if (isFull())
                return false;
    
            rear = (rear + 1) % capacity;
            q[rear] = value;
            count++;
            return true;
        }
    
        bool deQueue() {
            if (isEmpty())
                return false;
    
            front = (front + 1) % capacity;
            count--;
            return true;
        }
    
        int Front() { return isEmpty() ? -1 : q[front]; }
    
        int Rear() { return isEmpty() ? -1 : q[rear]; }
    
        bool isEmpty() { return count == 0; }
    
        bool isFull() { return count == capacity; }
    };
    
    /**
     * Your MyCircularQueue object will be instantiated and called as such:
     * MyCircularQueue* obj = new MyCircularQueue(k);
     * bool param_1 = obj->enQueue(value);
     * bool param_2 = obj->deQueue();
     * int param_3 = obj->Front();
     * int param_4 = obj->Rear();
     * bool param_5 = obj->isEmpty();
     * bool param_6 = obj->isFull();
     */