#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long int;
const int N = 1e9+7 ;

ll mod_inv(ll n1,ll n2)///EXTENDED EUCLIDEAN ALGORITHM TO FIND MODULAR INVERSE
{
    if(n2==0)
    {
        return -1 ;
    }
    if(__gcd(n1,n2)!=1)
    {
        return -1 ;
    }

    int q,a,b,t1,t2,t ;
    a=n2 ;
    b=n1 ;
    t1=0 ;
    t2=1 ;

    while(1)
    {
        if(b==0)
        {
            break ;
        }

        q=a/b ;
        t=t1-t2*q ;

        int temp=a ;
        a=b ;
        b=temp%b ;

        t1=t2 ;
        t2=t ;

    }

    if(t1<0)
    {
        t1+=n2 ;
    }

    return t1 ;
}

int main()
{

    cout << "Enter the number and mod for which you want modular inverse :\n" << endl ;
    ll n1,n2,ans ;
    cin >> n1 >> n2 ;
    cout << endl ;
    ans=mod_inv(n1,n2) ;
    if(ans!=-1)
    {
        cout << "Modular inverse of " << n1 << " mod " << n2 << " is : " << mod_inv(n1,n2) << endl ;
    }
    else
    {
        cout << "Modular inverse doesn't exist \n" << endl ;
    }
}

