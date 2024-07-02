#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the card Array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cardPoints = [1,2,3,4,5,6,1], k = 3
    //12
    cout<<"Enter number k:"<<endl;
    int k;
    cin>>k;
    int sum=0;
    int l=0;
    int r=n-1;
    for(int i=0;i<n;i++){
        if(k==0)
        break;
        int right=arr[r];
        int left=arr[l];
        if(right>left){
        sum+=right;
        r--;
        }
        else if(left>right){
            sum+=left;
            l++;
        }
        else if(right==left){
            if(arr[r-1]>arr[l+1]){
                sum+=right;
                r--;
            }
            else if(arr[l+1]>arr[r-1]){
                sum+=left;
                l++;
            }
            else{
                sum+=left;
                l++;
            }
        }
        k--;

    }
    // Input: cardPoints = [2,2,2], k = 2
    // 4
    cout<<sum<<endl;
}