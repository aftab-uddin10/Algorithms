/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>

using namespace std;

void coinChange(int coins[], int n, int amount) {
   
    int A[amount + 1];  
    int B[amount + 1]; 
  
    for (int i = 0; i <= amount; i++) {
        A[i] = 1000000;  
        B[i] = -1;  
    }

    A[0] = 0; 
    for (int i = 0; i < n; i++) { 
        for (int j = coins[i]; j <= amount; j++) {  
            if (A[j - coins[i]] != 1000000 && A[j - coins[i]] + 1 < A[j]) {
                A[j] = A[j - coins[i]] + 1;  
                B[j] = coins[i]; 
            }
        }
    }

    if (A[amount] == 1000000) {  
        cout << "It's not possible ." << endl;
    } else {
        cout << "Minimum number of coins needed: " << A[amount] << endl;

        cout << "Coins used: ";
        int nAmount = amount;
        while (nAmount > 0) {
            int coin = B[nAmount];  
            cout << coin << " ";  
            nAmount -= coin;  
        }
        cout << endl;
    }
}

int main() {
    int coins[] = {1, 2, 5};  
    int n = sizeof(coins) / sizeof(coins[0]); 
    int amount = 11; 

    coinChange(coins, n, amount);  

    return 0;
}
