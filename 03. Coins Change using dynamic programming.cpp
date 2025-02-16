 /***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>
using namespace std;

int coinChange(int A[], int coins, int amount) {
    int C[coins + 1][amount + 1];

    for (int i = 0; i <= coins; i++) {
        for (int j = 0; j <= amount; j++) {
            if (j == 0)
                C[i][j] = 1; 
            else if (i == 0)
                C[i][j] = 0; 
                
            else if (A[i - 1] <= j)
                C[i][j] =C[i - 1][j] + C[i][j - A[i - 1]];
            else
                C[i][j] = C[i - 1][j];
        }
    }

    return C[coins][amount];
}

int main() {
    int A[] = {1, 3, 5};
    int coins = sizeof(A) / sizeof(A[0]);
    int amount = 8;
    
    int result= coinChange(A, coins, amount);

    cout << "Number of ways : " << result << endl;
    return 0;
}
