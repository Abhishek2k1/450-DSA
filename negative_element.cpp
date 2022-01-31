// Move all negative numbers to beginning and positive to end with constant extra space

int main(){
  int n;
  cin>>n;
  int a[n];
  int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
  
  
