#include <string>
 
#include <iostream>
#include <cmath>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){	
	
	int n;
	cin >> n;
	for(int i=0; i<n; ++i){
		string str;
		
		for(int i=0; str[i]!='\n'; ++i){
			char c;
			cin >> c;
			str.push_back(c);
		}
		int mid = str.size()/2;
		for(int j=mid; j>=0; --j){
			cout << str[j];
		}
		for(int j=mid+1; j<str.size(); ++j){
			cout << str[j];
		}
	}
	
	
 	return 0;
	
}
