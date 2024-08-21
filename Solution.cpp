class Solution{
public:
    int minSwap(int arr[], int n, int k) {
        int good=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                good++;
            }
        }
        
        int bad=0, minSwaps=good;
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                bad++;
            }
            
            if(i==good-1){
                minSwaps= min(bad, minSwaps);
            }
            else if(i>=good){
                if(arr[i-good]>k){
                    bad--;
                }
                minSwaps= min(bad,minSwaps);
            }
        }
        return minSwaps;
    }
};
