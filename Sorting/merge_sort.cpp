#include<iostream>
using namespace std;
void merge_sort(int ){
    
}
int main() {
    int n;
    int m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int c[m+n];
    int i=0;
    int j=0;
    int k=0;
        while(i<n && j<m){
            if(a[i] < b[j]){
                c[k] = a[i];
                i++;
                k++;
            }
            cout<<c[k]<<" ";
            if(b[j] < a[i]){
                c[k] = b[j];
                j++;
                k++;
            }
            cout<<c[k]<<" ";
            while(i < n){
                c[k] = a[i];
                i++;
                k++;
            }
            while(j < m){
                c[k] = b[j];
                j++;
                k++;
            }
        }
    for(int l=0; l<(m+n); l++){
        cout<<c[l]<<" ";
    }
}