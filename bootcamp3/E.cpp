/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   E.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:53:46 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/24 05:05:34 by nhanafi          ###   ########.fr       */
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
            for(long long j = 0;j < m;j++)
                    mat[0][j] = 1;
            for(long long j = 1;j < m;j++)
                mat[j][j - 1] = 1;
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
            for(long long j = 0;j < b.m; j++)
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
    long long n,res = 0;
    cin >> n;
    Matrix M(6,6,3);
    vector < vector <long long> > vec(6,vector<long long>(1));
    for (int i = 0; i < 6; i++)
        vec[i][0] = 1 << (5 - i);
    Matrix A(vec);
    if(n <= 6)
    {
        cout << A.get(6 - n,0);
        return 0;
    }
    Matrix B = (M ^ (n - 6)) * A ;
    cout << B.get(0,0);
}


