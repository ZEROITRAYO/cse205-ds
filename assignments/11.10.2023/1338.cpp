class Solution {
public:
vector<int> mergesorted(vector<int>&arr)
    {
        if(arr.size()==1)
        {
            return arr;
        }
        int dividesize=arr.size()/2;
        vector<int>merge1,merge2;
        for(int i=0;i<dividesize;i++)
        {
            merge1.push_back(arr[i]);
        }
        for(int i=dividesize;i<arr.size();i++)
        {
            merge2.push_back(arr[i]);
        }
        merge1=mergesorted(merge1);
        merge2=mergesorted(merge2);
        int ptr1=0,ptr2=0,ptr3=0;
        while(ptr3<arr.size())
        {
            if(ptr1==merge1.size())
            {
                arr[ptr3]=merge2[ptr2];
                ptr2++;
                ptr3++;
                continue;
            }
            if(ptr2==merge2.size())
            {
                arr[ptr3]=merge1[ptr1];
                ptr1++;
                ptr3++;
                continue;   
            }
            if(merge1[ptr1]<merge2[ptr2])
            {
                arr[ptr3]=merge1[ptr1];
                ptr1++;
                ptr3++;
            }
            else
            {
                arr[ptr3]=merge2[ptr2];
                ptr2++;
                ptr3++;
            }
        }
        return arr;
    }
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        arr=mergesorted(arr);
        vector<int> v;
        int count = 1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                if(i!=arr.size()-2){
                v.push_back(count);
                count = 1;
                }
                else{
                    v.push_back(count);
                    v.push_back(1);
                }
            }
            else{
                count++;
             if(i+1==arr.size()-1) {
                 v.push_back(count); 
             }  
            }
        }
        
        count = 0;
        sort(v.rbegin(),v.rend());
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += v[i];
            count++;
            if(sum>=n/2){
                return count;
            } 
        }
        return count;
    }
};