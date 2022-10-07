class MyCalendar {
    private: map<int,int>mpp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        mpp[start]++;
        mpp[end]--;
        int sum=0;
        for(auto it=mpp.begin(); it!=mpp.end(); it++)
        {
            sum+=it->second;
            //before closing if any case happen where we start another event ie +1 before closing it ie -1 that will be the case for intersection 
            if(sum>1)
            {
                 mpp[start]--;
                 mpp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */