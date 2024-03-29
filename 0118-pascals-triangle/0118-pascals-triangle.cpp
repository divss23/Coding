class Solution {
public:
    vector<int>generaterow(int row){
        vector<int>ansrow;
        int ans=1;
        ansrow.push_back(1);
        for(int col=1;col<row;col++){
            ans*=(row-col);
            ans/=col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ansrow;
        for(int row=1;row<=numRows;row++){
            ansrow.push_back(generaterow(row));
        }
        return ansrow;
    }
};