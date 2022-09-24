/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:53:46 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/18 02:22:01 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
                    mat[i][j] = 0;
        }
        if (type == 3)
        {
            for(long long i = 0;i < n;i++)
                for(long long j = 0;j < m;j++)
                    mat[i][j] = 1;
        }
        if (type == 4)
        {
            for(long long i = 1;i < n;i++)
                mat[i][i - 1] = 1;
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
    long long n,k, res = 0;
    cin >> n  >> k;
    Matrix mat(n,n,4);
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        mat.set(0, i, x);
    }
    vector <long long> arr(1);
    vector <vector <long long> > vec(n,arr);
    for (int i = 0; i < n; i++)
        cin >> vec[n - i - 1][0];
    Matrix Ai(vec);
    long long p,q,r;
    cin >> p >> q >> r;
    Matrix matres = (mat ^ k) * Ai;
    res = matres.get(0,0);
    mat = mat ^ k;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << mat.get(i,j) << " ";
        cout << endl;
    }
    
    k = k % mod;
    long long sum1 = (((q * k) % mod) * (k + 1)) / 2;
    long long sum2 =  (((r * k) % mod) * (((k + 1) * (2*k + 1)) % mod)) / 6;
    res = res % mod + (k * p) % mod + sum1 % mod+ sum2 % mod;
    cout << res;
}

