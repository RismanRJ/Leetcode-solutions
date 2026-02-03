class Solution {

    void merge(int low , int high , int mid , vector<int>& nums){
        int n1 =  mid-low +1;  //calculate left array size
        int n2 = high -mid; // calculate right array size

        vector<int> leftArr(n1) , rightArr(n2);

        for(int i=0;i<n1;i++)leftArr[i]=nums[i+low]; 
        // push all the array elements based on split index into temp Arr (left)

        for(int i=0;i<n2;i++) rightArr[i]= nums[mid+i+1];
        // push all the array elements based on split index into temp Arr (right)

        int i=0,j=0,k=low; 
        // initialize K = left to perform exactly at the lower index we split

        while(i<n1 && j<n2){
            if(leftArr[i]<=rightArr[j]){
                nums[k++]=leftArr[i++];
            }
            else nums[k++]= rightArr[j++];
        }

        //append remaining element to the arr
        while(i<n1)nums[k++] = leftArr[i++];
        while(j<n2)nums[k++] = rightArr[j++];


    }

    void mergeSort(int low , int high , vector<int>& nums ){
        if(low>=high) return;
        int mid = low + (high-low)/2;

        mergeSort(low,mid,nums);
        mergeSort(mid+1,high,nums);

        merge(low,high,mid,nums);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0,nums.size()-1,nums);
        return nums;
    }
};