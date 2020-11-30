#include<iostream>
using namespace std;
int main(){
  int W,H;
  while(cin>>W>>H){
    if(W%4==0||H%4==0){
      cout<<(W*H)/2<<endl;
    }
    else{
      cout<<1+(W*H)/2<<endl;
    }
  }
  return 0;
}
