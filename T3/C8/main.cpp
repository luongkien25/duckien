#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
            int c=a[i];
            a[i]=a[j];
            a[j]=c;
            }
        }
    }
    int sum=0;
    for(int i=1;i<n;i++){
        sum+= a[i]*(i);
    }
    cout<<sum;
    return 0;
}
