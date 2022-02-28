using namespace std;
#include <stdio.h>
//#include <iostream.h>

int main(){
  int t;
  int k;
  cin>>t>>k;
  for (int i = 0; i < t;i++){
    int a;
    cin>>a;
    // Program starts
    int cnt;
    if (a % k == 0){
      cnt++;
    }

  }
  cout<<cnt;
}
