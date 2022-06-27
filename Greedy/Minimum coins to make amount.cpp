int findMinimumCoins(int amount)
{
    // Write your code here
    int v[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int i = 8, cnt = 0;
    while (i > -1) {
        if (v[i] <= amount) {
            cnt++;
            amount -= v[i];
        }
        else
            i--;
    }
    return cnt;
}
