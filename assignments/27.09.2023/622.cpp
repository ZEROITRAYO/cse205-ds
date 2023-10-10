class MyCircularQueue {
public:
    vector<int> arr;
    int s;
    MyCircularQueue(int k) {
        s = k;
    }
    
    bool enQueue(int value) {
        if(arr.size() == s) return false;
        else{
            arr.push_back(value);
            return true;
        }
    }
    
    bool deQueue() {
        if(arr.size() == 0) return false; 
        for(int i = 0; i < arr.size() - 1;i++){
            arr[i] = arr[i+1];
        }
        arr.pop_back();
        return true;
    }
    
    int Front() {
        if(arr.size() == 0) return -1;
        return arr[0];
    }
    
    int Rear() {
        if(arr.size() == 0) return -1;
        return arr[arr.size() - 1];
    }
    
    bool isEmpty() {
        if(arr.size() == 0) return true;
        else return false;
    }
    
    bool isFull() {
        if(arr.size() == s) return true;
        else return false;
    }
};

