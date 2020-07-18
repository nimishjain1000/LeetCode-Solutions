    bool binSearch(vector<int> arr, int target, int start, int end){
        
        if(arr.size() <2){
            if(arr[0] == target ) return true;
            else return false;
        }
        
        int mid = start + (end-start)/2;
        if(start >end) return false;
            if(arr[mid] == target) return true;
            
        if(arr[mid] > target){
            return binSearch(arr, target, start, mid-1);
        }else return binSearch( arr, target, mid+1, end);
      
    }
