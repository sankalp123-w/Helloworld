#include<iostream>
using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int N,M,Q,x,y,roweven=0,rowodd=0,coleven=0,colodd=0,c=0;
        cin>>N>>M>>Q;
        long long int row[N],col[M];
        for(int i=0;i<N;i++)
            row[i]=0;
        for(int j=0;j<M;j++)
            col[j]=0;
        while(Q--)
        {
            cin>>x>>y;
            row[x-1]++;
            col[y-1]++;
        }
        for(int i=0;i<N;i++)
        {
            if(row[i]%2==0)
                roweven++;
            else
                rowodd++;
        }
        for(int i=0;i<M;i++)
        {
            if(col[i]%2==0)
                coleven++;
            else
                colodd++;
        }
        c=(rowodd*coleven)+(colodd*roweven);
        cout<<c<<"\n";
    }
    return 0;
}

