class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> arr(rowIndex+1);
        

        for(int i = 0; i <= rowIndex; i++) {
            arr[i].resize(i + 1);
        }
        arr[0][0]=1;
        for(int i=1; i<=rowIndex; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
        }
        vector<int> result(rowIndex+1);
        for(int i=0; i<=rowIndex; i++){
            result[i]=arr[rowIndex][i];
        }

        return result;
    }
};