class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>heap;
        for(int num:nums){
            heap.push(-num);
// C++ std::priority_queue implements a max-heap. To achieve min-heap functionality, we will multiply the values by -1 before pushing them onto the heap.
            if(heap.size()>k){
                heap.pop();
            }
        }
        
        return -heap.top();
    }
};