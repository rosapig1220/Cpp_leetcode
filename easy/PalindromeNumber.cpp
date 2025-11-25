#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false; //負數無法回文
        vector<int> a;

        int n=x;
        if(n==0) a.push_back(0);
        while(n>0){
            a.push_back(n%10);
            n /= 10;
        }
        int size=a.size();
        for(int i=0;i<size/2;i++){
            if(a[i] != a[size-1-i]) return false;
        }
        return true;
    }
};

int main(){
    int x;
    cin >> x;
    Solution sol;
    cout << boolalpha << sol.isPalindrome(x) << endl;
    return 0;
}
