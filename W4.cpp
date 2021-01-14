#include <stdio.h>

int main()
{
    int car[101][101] = {
        0,
    };
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        int from, to, car_temp;
        scanf("%d %d %d", &from, &to, &car);
        if (car[from][to] == 0 || car[from][to]< car_temp){
            car[from][to] = car_temp;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("%d", car[i][j]);
        }
        printf("\n");
    }
    return 0;
}
