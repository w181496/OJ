// NPSC 2008 高中組決賽
// 題目 A - 蜜蜂的約會
// By sagit at TCGS
#include <cstdlib>
#include <iostream>

using namespace std;

const int MAX=100001;
// Pos[k] 記錄數字 k 在第一個數列中出現的順序
// LIS[n] 記錄 LIS 為 n 的最小元素, Len 記錄目前 LIS 的最大值
int Pos[MAX], LIS[MAX], Len;

int main()
{

    int n, i, j, a, first, last, middle;
    while (1)
    {
        cin >> n;
        if ( cin.fail() ) break;
        for (i=0; i<n; i++)             // 輸入第一個數列
        {
            cin >> a;
            Pos[a]=i;                   // 記錄該數字在數列中出現的順序
        }
        cin >> a;                       // 處理第二個數列的第一個數
        LIS[0]=Pos[a];
        Len=0;
        for (i=1; i<n; i++)
        {
            cin >> a;
            a=Pos[a];                   // 將數字轉換成第一個數列中出現的順序
            if (a>LIS[Len])             // 如果比最後一個數還要大
                LIS[++Len]=a;
            else
            {
                first=0, last=Len;
                while (first<=last)      // Binary Search
                {
                    middle=(last+first)/2;
                    if (LIS[middle]>a) last=middle-1;
                    else if (LIS[middle]<a) first=middle+1;
                    else break;
                }
                if (LIS[middle]<a) LIS[middle+1]=a;
                else LIS[middle]=a;
            }
        }
        cout << Len+1 << endl;
    }
//    system("PAUSE");
    return 0;
}
