#include <bits/stdc++.h>
using namespace std;

 int subarraySum(vector<int>& nums, int k) {
        int sum = 0, n = nums.size(),count = 0 ;
        for(int i = 1; i<n ;i++){
            nums[i]+=nums[i-1];
        }
        
        for(int i = 0; i<n ;i++){
            if(nums[i]==k){count++;}
            
            for(int j = 0; j<i ;j++){
                sum = nums[i]-nums[j];
                if(sum==k)count++;
            }
        }

       /* for(int j = 0 ; j < n; j++){
            for(int i = 0 ; i < n; i++ ){
                if(sum<k){
                    sum += nums[i];
                    if(sum>= k ){
                        count++;
                        sum=0;
                }
            }
        }
        }*/
        return count;
    }

int main() {
	// your code goes here
	int n,x;
	cin >> n;
	cin >> x;
	vector<int> nums;
	for(int i=0 ; i<n; i++){
	    int a;
	    cin>>a;
	    nums.push_back(a);
	}
	
	cout<< subarraySum(nums,x);
	

}

