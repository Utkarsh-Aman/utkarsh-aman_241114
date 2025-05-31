#include <bits/stdc++.h>
using namespace std;

int beauty(vector<int>& a,vector<int>& b,int n){
    vector<pair<double,int> > ratio(n);
    for(int i = 0 ; i < n ; i++ ){
        ratio[i]={(double)b[i]/a[i],i};
    }
    
    sort(ratio.begin(),ratio.end());
    
    int maxbeauty=0;
    int x=0;
    for(int i = 0 ; i < n ; i++ ){
        maxbeauty+=x*b[ratio[i].second];
        x+=a[ratio[i].second];
        
    }
    return maxbeauty;
}

int main() {
	// your code goes here
    int T;
    cin >> T;
    for(int h=0; h<T ;h++){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0;i<n;i++){
            
            cin>>a[i];
            
        }
        for(int i = 0;i<n;i++){
            
            cin>>b[i];
           
        }
        
        
        cout<< beauty(a,b,n) << endl ;
        
        
    }
}

