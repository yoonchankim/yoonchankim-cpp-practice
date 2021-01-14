#include <stdio.h>
using namespace std;
int main()
{
    //등수매기기(이건 모르겟네요.수업시간에 설명해 주세요.)
    int p;
    int center;
    int score[10001];
    int lanking[10001];
    int result[10001];
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &score[i]);
        lanking[i] = score[i];
    }
    for (int k = 0; k < p; k++)
    {
        for (int m = k + 1; m < p; m++)
        {
            if (score[k] < score[m])
            {
                center = score[k];
                lanking[k] = score[m];
                lanking[m] = center;
            }
        }
    }
    for (int g = 0; g < p; g++)
    {
        for (int x = 0; x < p; x++)
        {
            if (score[g] == lanking[x])
            {
                result[g] = x + 1;
            }
        }
    }
}