class RandomizedSet {
public:
    unordered_map<int,int> mp;
    vector<int> a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.count(val)){
            return false;
        }else{
            a.push_back(val);
            mp[val]=a.size()-1;
            return true;
        }

    }
    
    bool remove(int val) {
        if(!mp.count(val)){
            return false;
        }else{
            int index = mp[val];
            int v = a.back();
            mp[v] = index;
            a[index]=v;
            a.pop_back();
            mp.erase(val);
            return true;

        }
    }
    
    int getRandom() {
       return a[rand()%a.size()]; 
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
