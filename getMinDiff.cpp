int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        
        int ans = arr[n -1] - arr[0];
        
        int smallest = arr[0] + k;
        int tallest = arr[n-1] - k;
        int mi,mx;
        
        
        for(int i=0;i<n-1;i++){
            
            mi = min(smallest, arr[i+1] - k);
            mx = max(tallest, arr[i] + k);
            
            if (mi < 0) continue;
        
            ans = min(ans, mx - mi);
        }
        return ans;
