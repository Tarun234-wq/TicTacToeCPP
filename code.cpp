#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
   int t;
   cin>>t;
   while(t--){
       long long int count = 0;
       long long int avg ;
       string S;
       cin>>S;
       int n = S.length();
       for(int i = 0; i<n; i++){
           int asci = int(S[i]);
           count = count + asci;
           
       }
       avg = count/n;
       cout << floor(avg) << endl;
       
   }
	return 0;
}