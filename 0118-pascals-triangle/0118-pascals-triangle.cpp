class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        

        for(int i = 0; i < numRows; i++) {
            arr[i].resize(i + 1);
        }
        arr[0][0]=1;
        for(int i=1; i<numRows; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
        }
        return arr;
    }
};