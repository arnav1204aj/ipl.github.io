#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char spa;
        spa=getchar();
    for(int i=0;i<t;i++){
        char arr[100000];
        cin>>arr;
        int no[26];
        for(int a=0;a<26;a++){
            no[a]=0;
        }
        
        char c;
      c=arr[0];
        int n=0;
        int d;
        while(1){
            if(c=='\n'||c==EOF){
                break;
            }
c=arr[n];

n++;

        }
        for(int a=0;a<n;a++){
            c=arr[a];
            d  = c-97;
no[d]++;
        }
        
       /* for(int a=0;a<26;a++){
            cout<<no[a];
        }*/
        vector<pair<int,char>> ch;
        for(int a=0;a<26;a++){
            int max=0;
            char mx;
            int im;
            for(int z=0;z<26;z++){
if(no[z]>=max){
    max=no[z];
    im=z;
    mx=z+97;
}

            }
            ch.insert(ch.end(),make_pair(max,mx));
no[im]=-1;
        }
       /* for(int a=0;a<26;a++){
            cout<<ch[a].second;
        }
        cout<<endl;*/
        
        if(n%2==0){
            if(ch[0].first>n/2){
                cout<<"-1"<<endl;
                continue;
            }
        }
        else{
            if(ch[0].first>n/2+1){
              cout<<"-1"<<endl;
                continue;  
            }
        }
        int count=0;
        int li=0;
        int si=1;
        int curr=1;
        while(count<n&&curr<26){
if(ch[si].first==0){
    curr++;
    si=curr;
    continue;
}
if(ch[li].first==0){
    curr++;
    li=curr;
    continue;
}

    cout<<ch[li].second;
    count++;
    ch[li].first--;
    cout<<ch[si].second;
    count++;
    ch[si].first--;
    




        }
        if(ch[li].first!=0){
         cout<<ch[li].second;   
        }
        if(ch[si].first!=0){
         cout<<ch[si].second;   
        }

cout<<endl;
    }
    return 0;
}