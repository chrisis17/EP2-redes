#include <iostream>
#include <vector>

using namespace std;

vector<int> nums(40, -1);

int fibonacci(int n){
    if(n == 0 or n == 1) return n;
    else{
        if(nums[n] != -1) return nums[n];
        else nums[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return nums[n];
}

int main(){
    nums[0] = 0;
    nums[1] = 1;

    fibonacci(30);

    for (auto num : nums){
        cout << num << " ";
    }

    return 0;
}