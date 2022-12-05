#include<bits/stdc++.h>
using namespace std;
int mod(int s){
    if(s>0)
    return s;
    return -s;
}
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int andy[n];
    int bob[n];
    for(int i=0;i<n;i++){
        cin>>andy[i];
    }
    for(int i=0;i<n;i++){
        cin>>bob[i];
    }
    vector<pair<long int,long int>> c;
    for(int i=0;i<n;i++){
         c.insert(c.end(),make_pair(andy[i]-bob[i],i));
    }
    sort(c.begin(),c.end());
    int lp=n-1;
    int ip=0;
    long sum=0;
    while(x>0&&y>0&&lp>=ip){
        if(c[lp].first>=0&&c[ip].first<=0){
if(mod(c[lp].first)>mod(c[ip].first)){
sum = sum+bob[c[lp].second];
y--;
lp--;
}
else if(mod(c[lp].first)<mod(c[ip].first)){
    sum = sum+andy[c[ip].second];
x--;
ip++;
}
else{
    if(x>y){
        
    }
}
        }
    }


}