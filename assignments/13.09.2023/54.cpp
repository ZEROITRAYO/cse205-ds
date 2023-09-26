class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int column=matrix[0].size();

        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=column-1;

        int count=0;
        int total=row*column;

        while(count<total){
            for(int index=startCol;count<total&&index<=endCol;index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            for(int index=startRow;count<total&&index<=endRow;index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            for(int index=endCol;count<total&&index>=startCol;index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

              for(int index=endRow;count<total&&index>=startRow;index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;



        }
        return ans;
    
    }
    
};