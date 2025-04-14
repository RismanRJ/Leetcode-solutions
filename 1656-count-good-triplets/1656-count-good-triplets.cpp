class Solution {
    bool isValid(int a, int b, int c, int x,int y, int z){
         return (x<=a&&y<=b&&z<=c);
    }
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n= arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k= j+1;k<n;k++)
                {
                    int x= arr[i];
                    int y = arr[j];
                    int z= arr[k];

                if(isValid(a,b,c,abs(x-y),abs(y-z),abs(x-z))) cnt++;
                }
               
                
            }
        }

        return cnt;
    }
};