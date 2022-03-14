#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[10],mod[42]={},check=0;
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    for(int i=0;i<10;i++){
        mod[num[i]%42]=1;
    }
    for(int i=0;i<42;i++){
        if(mod[i]==1){
            check++;
        }
    }
    cout<<check;
}