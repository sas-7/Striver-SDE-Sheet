vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int>freq(n+1,0);
    vector<int>v;
    for(int i=0;i<n;i++) freq[A[i]]++;
    for(int i=1;i<=n;i++){
        if(freq[i]>1) v.push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(freq[i]==0) v.push_back(i);
    }
    return v;
}
