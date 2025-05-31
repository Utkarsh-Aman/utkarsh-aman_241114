#include <bits/stdc++.h>
using namespace std;

int visible(int n,vector<int>& box){
    sort(box.begin(),box.end());
    int count = n;
    int size = 0;
    for (int i = 0; i < n; i++) {
        
        size+=box[i];
        
        if(size <= box[i+1]){
            count--;
        }
        else{
            size=0;
        }
        
            
        
    }
    return count;
}

int main() {
	// your code goes here
    int n;
    cin >> n;
    vector<int> box(n);
    for(int i = 0;i<n ; i++ ){
        cin >> box[i];
    }
    cout<<visible(n,box);
}
