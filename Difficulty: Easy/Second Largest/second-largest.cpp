class Solution {
  public:
    int secondlargest(vector<int> &arr,int n){
	   int largest=arr[0];
	    int slargest=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>largest){
	            slargest=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]<largest&&arr[i]>slargest){
	            slargest=arr[i];
	        }
	    }
	    return slargest;
	}
    int getSecondLargest(vector<int> &arr) {
        int n= arr.size();
        int slargest= secondlargest(arr,n);
	    return slargest;
        
    }
};