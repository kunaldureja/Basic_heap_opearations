//using an extra vector
void createheap(vector<int>& vec){
    vector<int>temp;
    for(int i=0;i<vec.size();i++){
        temp.push_back(vec[i]);
        int j=temp.size()-1;
        while(j>0){
            if(temp[j]>temp[j/2]){
                swap(temp[j],temp[j/2]);
                j= j/2;
            }
            else 
            break;
        }
    }
    vec = temp;
}
//using the same vector
void createheap1(vector<int>& vec){
    for(int i=1;i<vec.size();i++){
        int j=i;
        while(j>0){
            if(vec[j]>vec[j/2]){
                swap(vec[j],vec[j/2]);
                j= j/2;
            }
            else 
            break;
        }
    }
}
