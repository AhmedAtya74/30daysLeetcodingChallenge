class Bitset {
    vector<bool>bs;
    int cnt;
    bool isFlip;
public:
    Bitset(int size) {
        bs.resize(size,0);
        cnt = 0;
        isFlip = false;
    }
    
    void fix(int idx) {
        if((bs[idx] + isFlip) %2 == 0){
            bs[idx] = !bs[idx];
             cnt++;
        }
       
    }
    
    void unfix(int idx) {
        if((bs[idx] + isFlip) %2 != 0){
             bs[idx] = !bs[idx];
             cnt--;
        }
       
    }
    
    void flip() {
       cnt = bs.size() - cnt;
       isFlip = !isFlip; 
    }
    
    bool all() {
       return cnt == bs.size();
    }
    
    bool one() {
        return cnt >= 1;
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
         string ans;
        for(auto bit:bs)
            ans.push_back((bit+isFlip)%2?'1':'0')  ;   
        return ans;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
