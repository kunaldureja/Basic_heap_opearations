void heapify(vector<int>& vec){
    int n = vec.size()-1;
    for(int i=n;i>=0;i--){
        if(2*i+1>n && 2*i+2>n)
        continue;
        else{
            int j=i;
            while(j<=n){
                if(vec[2*j+1]>vec[2*j+2]){
                    if(vec[j]<vec[2*j+1]){
                        swap(vec[j],vec[2*j+1]);
                        j = 2*j+1;
                    }
                }
                else{
                    if(vec[j]<vec[2*j+2]){
                        swap(vec[j],vec[2*j+2]);
                        j = 2*j+2;
                    }
                }
            }
        }
    }
}