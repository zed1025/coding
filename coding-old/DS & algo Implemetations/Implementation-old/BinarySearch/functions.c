extern void bubbleSort(int x[], int n){
    int hold, j, pass;
    int switched = 1;

    for(pass = 0; (pass < n-1) && (switched == 1); pass++){
        switched = 0;
        for(j=0; j<n-pass-1; j++){
            if(x[j] > x[j+1]){
                switched = 1;
                hold = x[j];
                x[j] = x[j+1];
                x[j+1] = hold;
            }
        }
    }
}

extern int binarySearch(int key, int arr[], int low, int high){
    int mid;

    if(high < low){
        return -1;
    }else{
        mid = (high + low)/2;

        if(key < arr[mid]){
            binarySearch(key, arr, low, mid);
        }else if(key > arr[mid]){
            binarySearch(key, arr, mid+1, high);
        }else{
            return mid;
        }
    }
}
