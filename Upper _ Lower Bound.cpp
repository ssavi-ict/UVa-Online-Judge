// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
#include <bits/stdc++.h>

int main () {
  int myints[] = {10,20,31,30,22,11,13,20};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 11 13 20 20 22 30 31

  std::vector<int>::iterator low,up, dn, u;
  low=std::lower_bound (v.begin(), v.end(), 19); //          ^
  up= std::upper_bound (v.begin(), v.end(), 19); //                   ^
  dn=std::lower_bound (v.begin(), v.end(), 20); //          ^
  u= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';
  std::cout << "lower_bound at position " << (dn- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (u - v.begin()) << '\n';

  std::cout<<pow(2,39);

  return 0;
}
