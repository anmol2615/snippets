#include <bits/stdc++.h>
using namespace std;

//smallest multiple of a number having digits 0 or 1 only
int main() {
    int num, res=0, i=1;
    string multiple;
    cin>>num;
    while(res!=1){
        multiple = to_string(num*i);
        int no_of_ones = count(multiple.begin(),multiple.end(),'1');
        int no_of_zeroes = count(multiple.begin(),multiple.end(),'0');
        if(multiple.length() == no_of_zeroes+no_of_ones){
            res=1;
            cout << num*i;
        } else {
            i++;
        }
    }
	return 0;
}
