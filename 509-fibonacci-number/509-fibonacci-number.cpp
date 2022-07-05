class Solution {
public:
    int arr[31];
    int fib(int n) {
        // cout << "n = " << n << endl;
        if(n == 0)
            return arr[0] = 0;
        
        if(n == 1)
            return arr[1] = 1;
        
        if(n > 1)
            return arr[n] = fib(n - 1) + fib(n - 2);
        
        // cout << "Going to return " << arr[n] << endl;
        return arr[n];
    }
};