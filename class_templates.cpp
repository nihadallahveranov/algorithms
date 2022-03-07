//  https://www.hackerrank.com/challenges/c-class-templates/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

template <class T>

class AddElements{
    T element1;
public:
    AddElements(T element1) {this -> element1 = element1;}
    T add(T element2) {return element1 + element2;}
    T concatenate(T element2) {return element1 + element2;}
};

int start_up() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {
  int n,i;
  std::cin >> n;
  for(i=0 ; i<n ; i++) {
    std::string type;
    std::cin >> type;
    if(type=="float") {
        double element1,element2;
        std::cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        std::cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        std::cin >> element1 >> element2;
        AddElements<int> myint (element1);
        std::cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        std::string element1, element2;
        std::cin >> element1 >> element2;
        AddElements<std::string> mystring (element1);
        std::cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
