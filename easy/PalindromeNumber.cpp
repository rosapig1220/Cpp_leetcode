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
        while(n>0){ //將數字拆成vector
            a.push_back(n%10); //取最後一位
            n /= 10; //去掉最後一位
        }
        int size=a.size();
        for(int i=0;i<size/2;i++){  //左右邊比對
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


/*進階版-反轉數字的一半(RevertedNumber)
class Solution {
public:
    bool isPalindrome(int x) { // 負數或末位為0但不是0本身
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;

        int RevertedNumber = 0;
        while(x > RevertedNumber) {
            RevertedNumber = RevertedNumber * 10 + x % 10; // 反轉最後一位
            x /= 10;                                        // 去掉最後一位
        } // x 長度偶數或奇數都能比對
        return (x == RevertedNumber || x == RevertedNumber/10);
    }
};
*/
