class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        /*
        map<int,string>mp;

        for(int i=0; i<heights.size(); i++){
            mp[heights[i]] = names[i];
        }

        int i = 0 ;
        for(auto it = mp.rbegin() ; it != mp.rend() ; ++it){
            names[i] = it->second;
            i++;
        }

        return names;
        */

      
        int n = heights.size();
        priority_queue<pair<int,string>> pq;

        for(int i = 0 ; i < n ; i++){
            pq.push({heights[i],names[i]});
        }

        int i = 0;
        while(!pq.empty()){
            names[i] = pq.top().second;
            pq.pop();
            i++;
        }

        return names;

    }
};
