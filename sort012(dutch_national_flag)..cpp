// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

{
        int l = 0;
        int m = 0;
        int h = n-1;
        
        while(m<=h){
            switch(a[m]){
                case 0:
                    swap(a[l++],a[m++]);
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(a[m],a[h--]);
                    break;
            }
        }
    }
