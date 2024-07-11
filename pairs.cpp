#include <bits/stdc++.h>
using namespace std;

int main () { 
  pair <int , int>p = { 1 ,2 };
  cout <<p.first << " " <<p.second <<endl ;
  //nested pairs //
  pair <int , pair<int , int>>q = {1 , {2,3}};
  cout <<q.first << " "<< q.second.first << " " <<q.second.second  <<endl;
  //nested pairs //
  pair <int , pair<int , pair<int ,int>>> r = { 1 , { 2 , { 3, 4}}}  ;
  cout <<r.first << " " <<r.second.first << " " <<r.second.second.first << " " <<r.second.second.second  <<endl;
  //arrays in pairs//
  pair<int , int>arr[] ={{1,2} , {3,4} , {5,6} ,{7,8} };
  cout<< arr[0].first << " " <<arr[0].second << " " <<arr[1].first << " " <<arr[1].second <<endl ;
  cout<< arr[2].first << " " <<arr[2].second << " " <<arr[3].first << " " <<arr[3].second ;
  return 0;
  
}