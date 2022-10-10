#include<bits/stdc++.h>
using namespace std;

//Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

int main(){
  
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
   cin>>v[i];
  }
  // method 1
  sort(v.begin(), v.end());
  int ans;
  int flag=1;
  for(int i=0; i<n; i++){
   int a = (n/2)+i;
   //cout<<a<<" "<<v[a]<<endl;
     if(a<n && v[i]==v[a] ){
       ans=v[i];
       flag=0;

       break;
     }

   else if (a>n){

      break;

}
  }
  if(flag==0){
    cout<<ans<<endl;
  }
  else{
   cout<<-1<<endl;

}
}



// method 2

/*int maj_index=0, count=1;
for(int i=1; i<n; i++){
    if(v[i]==v[maj_index]){
        count++;
    }
    else{
        count--;
    }
    if(count==0){
        maj_index=i;
        count=1;
    }
}
count=0;
for(int i=0; i<n; i++){
    if(v[i]==v[maj_index]){
        count++;
    }
}
if(count>n/2){
    cout<<v[maj_index]<<endl;
}
else{
    cout<<-1<<endl;
}
}*/
