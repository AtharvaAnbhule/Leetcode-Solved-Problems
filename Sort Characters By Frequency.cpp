class Solution {
public:
    string frequencySort(string s) {
        
        // Declaration of map and priority queue
        unordered_map<char, int> map;
        //priority queue
        priority_queue<pair<int, char>> pq; // int is the frequency

        // Mapping the char with the frequency
        for(auto ch: s) map[ch]++;

        // Pushing the char with frequencies in the priority queue
        for(auto it: map){
            pq.push({it.second, it.first});
        }

        string ans = ""; //empty string

        // Generating the anser string
        while(!pq.empty()){

            auto [freq, ch] = pq.top(); //as top with highest frequency
            pq.pop();

            while(freq--) ans.push_back(ch);
        }

        return ans;
    }
};
