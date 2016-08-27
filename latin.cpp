#include <iostream>
#include <cstring>

using namespace std;

 int main()
 {
    string s;
    cin >> s;
    int length = s.length();
    int length2;

    string temp;
    int n;
    cin >> n;
    int count = 0;

    while(n > 0){
    	cin >> temp;
    	length2 = temp.length();
    	for(int j = 0; j < length2; j++){
    		for(int i = 0; i < length; i++){
    			if(s[i] == temp[j]){
    				count++;
    				break;
    			}
    		}
    	}
    	if(count == length2)
    		cout << "Yes" << endl;
    	else
    		cout << "No" << endl;
    	count = 0;
    	n--;
    }
    return 0;

 }