class Solution {
public:
    int countSeniors(vector<string>& details) {

        int count=0;
        int temp=0;
        string s="";
        for( int i=0;i<details.size();i++){
            s+=details[i][11];
            s+=details[i][12];
            temp= stoi(s);
            if(temp>60){
                count++;
            }
            s="";
            temp=0;
        }
        return count;
        
    }
};