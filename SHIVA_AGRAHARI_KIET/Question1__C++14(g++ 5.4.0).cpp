 #include<bits/stdc++.h>
#include<queue>
using namespace std; 
int main(){
    
    
  int n,p,m;
    cin>>n>>p>>m; 
    queue <int> people; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>p  ; 
        people.push(p); 
    }
    while(m--){
  string events; 
    cin>>events; 
    long long int p,q1,q2,q3 ; 
    q1 = 'S';
    q2 = 'F';
    q3 ='V';
    p = stoi(events) ; 
    if( p == q1){
        people.pop(); 
    }
    else if( p == q2){
        int x,y; 
        cin>>x>>y; 
        int arr[x]; 
      for(i=n-x;i<n;i++){
          arr[x] = people.back();  
          people.back();
          people.pop(); 
      }
      people.push(y); 
      for(i=y+1;i<n;i++){
          people.push(arr[i]);
      }
    }
    else if( p == q3){

        int x,b; 
        cin>>x; 
        people.push(x);
        people.front();          

        }
    }


    while (!people.empty())
  {
    std::cout << ' ' << people.front();
    people.pop();
  }
  

    return 0; 
}