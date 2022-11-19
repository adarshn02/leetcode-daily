class Solution {
public:
    double average(vector<int >& salary) {
        double s=0.0;
        int c=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            s+=salary[i];
            c++;
    }
    return (s/c);
        
        
    }
};