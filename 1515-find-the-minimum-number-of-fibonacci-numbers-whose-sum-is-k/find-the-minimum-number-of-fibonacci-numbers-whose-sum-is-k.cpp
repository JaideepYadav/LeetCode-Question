class Solution {
public:
map<int,bool>fib;
void calc(int k){
    int f=1,f2=0;
    while(f<=k){
        fib[f]=true;
        int x=f2;
        f2=f;
        f+=x;
    }
}
int findMinFibonacciNumbers(int k) {
    int cnt=0;
    fib.clear();calc(k);
    if(fib.count(k))return 1;
    while(k){
        auto it=fib.upper_bound(k);
        it--;
        cnt++;k-=(it->first);
    }
    return cnt;}
};