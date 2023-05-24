#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isused[10];
int a[100];

void func(int k) 
{
    if (k == m) 
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' '; 
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) //n=4 m=3
    { if(!isused[i])
        { 
        isused[i] = 1;

            arr[k] = a[i]; 
            
            func(k + 1);
            isused[i] = 0;
            
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp;
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }



    func(0);
}
