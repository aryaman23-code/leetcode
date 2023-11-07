class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int count = 0, n = dist.size(); 
        for(int i = 0; i < n; i++)
            if (dist[i] % speed[i] != 0) 
                dist[i] = (dist[i]/speed[i])+1;  
            else 
                dist[i] /= speed[i];
        sort(dist.begin(),dist.end());
        for(int time = 0; time < n; time++){
            if (dist[time] <= time) 
                break;
            count++;
        }
        return count;
    }
};