#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>


using namespace std;
typedef vector<long long> vi;
const long long mod = (long long)1e9 + 7;
class Matrix{
    long long n,m;
    vector<vi > mat;
    public:
    Matrix(long long n,long long m, long long type)
    {
        this->n=n;
        this->m=m;
        mat.assign(n,vi(m,0));
        if(type==1)
        {
            for(long long i = 0;i < n;i++)
                mat[i][i]=1;
        }
        if(type==2)
        {
            for(long long i = 0;i < n;i++)
                for(long long j = 0;j < m;j++)
                    mat[i][j]=1;
        }
        if (type == 3)
        {
           mat[0][0] = 4;
           mat[0][1] = 1;
           mat[1][0] = 1;
           mat[1][1] = 2;
        }
    }
    Matrix(vector<vi> inp)
    {
        this->n = inp.size();
        this->m = inp[0].size();
        mat = inp;
    }
    Matrix operator + (const Matrix &b)
    {
        class Matrix out = Matrix(this->n,this->m,0);
        for(long long i = 0; i < this->n;i++)
            for(long long j = 0;j < this->m; j++)
            out.mat[i][j] = (this->mat[i][j]+b.mat[i][j])%mod;
        return out;
    }
    Matrix operator - (const Matrix &b)
    {
        class Matrix out = Matrix(this->n,this->m,0);
        for(long long i = 0; i < this->n;i++)
            for(long long j = 0;j < this->m; j++)
            out.mat[i][j] = (this->mat[i][j]-b.mat[i][j]+mod)%mod;
        return out;
    }
    Matrix operator * (const Matrix &b)
    {
        class Matrix out = Matrix(this->n,b.m,0);
        for(long long i = 0; i < this->n;i++)
            for(long long j = 0;j < this->m; j++)
                for(long long x = 0;x < this->m;x++)
                {
                    out.mat[i][j] += ((this->mat[i][x] % mod)*(b.mat[x][j] % mod))%mod;
                    out.mat[i][j] %=mod;
                }
        return out;
    }
    Matrix operator ^ (const long long &p)
    {
        return matbin(*this,p);
    }
    Matrix matbin(Matrix a, long long b)
    {
        if (b==0)
            return (Matrix(a.n,a.n,1));
        Matrix res = matbin(a,b/2);
        if (b%2)
            return res*res*a;
        else
            return res*res;
    }
    long long get(long long x,long long y)
    {
        return this->mat[x][y];
    }
    void set(long long x, long long y, long long val)
    {
        this->mat[x][y] = val;
    }
};

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        Matrix m(2,2,3);
        Matrix ans(2,1,2);
        ans = (m ^ (n - 1)) * ans;
        cout << (ans.get(0,0) + ans.get(1,0)) % mod << endl;

    }
}