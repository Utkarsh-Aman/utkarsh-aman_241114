#include <bits/stdc++.h>
using namespace std;

void canarrange(vector<pair<int,bool>> a,int n){
    // sort(a.begin(),a,end(), [](int a, int b){
        
    //     return a<b && a.second+1 && b.second+1;
    // }
    bool is=true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++){
            if (a[j].first > a[j+1].first) {
                swap(a[j], a[j+1]);
                a[j].second = !a[j].second;
                a[j+1].second = !a[j+1].second;
                }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if(a[i].first==a[i+1].first && a[i].second==false && a[i+1].second==false){
                a[i+1].second=true;
                a[i].second=true;
                i++;
            }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i].second==false){
            is = false;break;
        }else{
            is = true;
        }
    }
    
    if(is){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}

int main() {
	// your code goes here
    int T;
    cin >> T;
   while(T--){
        int n;
        cin >> n;
        vector<pair<int,bool>> a(n);
        
        for(int i = 0;i<n;i++){
            cin>>a[i].first;
            a[i].second=true; //true means right
        }
        canarrange(a,n);
       
   }
}
