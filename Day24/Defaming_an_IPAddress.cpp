#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address) {

    string ans;

    for(int i = 0; i < address.size(); i++){
        if(address[i] == '.'){
            ans += "[.]";
        }
        else{
            ans.push_back(address[i]);
        }
    }

    return ans;
}

int main() {

    string address;
    cout << "Enter IP address: ";
    cin >> address;

    string result = defangIPaddr(address);

    cout << "Defanged IP Address: " << result << endl;

    return 0;
}
