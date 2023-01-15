class Solution {
public:
    double myPow(double x, int n) {
        cout << "Function called with x = " << x << " and n = " << n << endl;
        //base case
        
        if(n == 0){
            return 1;
        }
        if(n == -1){
            cout << "x = " <<x<<endl;
            return 1/x;
        }
        
        // if n is even
        if(n % 2 == 0){
            return myPow((x*x), n/2);
        }
        else{
            // if n is odd
            return x * myPow(x, n - 1);
        }
    }
};