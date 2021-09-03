void build(int *arr, int left, int right, int *t, int idx){
    if(left == right){
        t[idx] = arr[right];
        return;
    }

    int mean = (left+right)/2;

    build(arr, left, mean, t, 2*idx);
    build(arr, mean+1, right, t, 2*idx+1);
    
    t[idx] = min(t[2*idx], t[2*idx+1]);
    return;
}

int query(int *t, int tl, int tr, int left, int right, int idx){
    if(tl >= left && tr <= right){
        return t[idx];
    }

    if(right < tl || left > tr){
        return INT_MAX; 
    }

    int mean = (tl+tr)/2;
    int l = query(t, tl, mean, left, right, 2*idx);
    int r = query(t, mean+1, tr, left, right, 2*idx+1);

    return min(l,r);
}

int *constructST(int arr[],int n){
  int *t =new int[4*n+1];
  build(arr, 0, n-1, t, 1);
  return t;
}

int RMQ(int t[] , int n, int a, int b){
    return query(t, 0, n-1, a, b, 1);
}