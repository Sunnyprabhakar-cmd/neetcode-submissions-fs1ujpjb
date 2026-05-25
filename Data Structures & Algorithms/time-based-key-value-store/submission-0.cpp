class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<string,int>>>map;
    void set(string key, string value, int timestamp) {
        map[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
       vector<pair<string,int>>& vec=map[key];
       string ans="";
       int left=0;
       int right=vec.size()-1;
       while(left<=right){
        int mid=left+(right-left)/2;
        if(timestamp>=vec[mid].second){
            ans=vec[mid].first;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
       }
       return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */