/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   W.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:53:46 by nhanafi           #+#    #+#             */
/*   Updated: 2022/09/18 00:58:33 by nhanafi          ###   ########.fr       */
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
const long long mod = (long long)1<<23;
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
    long long n,res = 0;
    cin >> n;
    vector <long long> arr(64);
    vector < vector <long long> > ma(64, arr);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(i - 2 >= 0)
            {
                if(j + 1 < 8)
                    ma[8 * i + j][8 * (i - 2) + j + 1]++;
                if(j - 1 >= 0)
                    ma[8 * i + j][8 * (i - 2) + j - 1]++;
            }
            if(i + 2 < 8)
            {
                if(j + 1 < 8)
                    ma[8 * i + j][8 * (i + 2) + j + 1]++;
                if(j - 1 >= 0)
                    ma[8 * i + j][8 * (i + 2) + j - 1]++;
            }
            if(i - 1 >= 0)
            {
                if(j + 2 < 8)
                    ma[8 * i + j][8 * (i - 1) + j + 2]++;
                if(j - 2 >= 0)
                    ma[8 * i + j][8 * (i - 1) + j - 2]++;
            }
            if(i + 1 < 8)
            {
                if(j + 2 < 8)
                    ma[8 * i + j][8 * (i + 1) + j + 2]++;
                if(j - 2 >= 0)
                    ma[8 * i + j][8 * (i + 1) + j - 2]++;
            }
        }
    }
    for (int i = 0; i < 64; i++)
    {
        ma[i][i] = 1;
    }
    
    Matrix mat(ma);
    mat = (mat ^ n);
    for (int i = 0; i < 64; i++)
    {
        
        cout <<  mat.get(0,i) << " ";
        if(i % 8 == 7)
            cout << endl;
        
    }
    
    
    // cout << mat.get(0,0) << endl;
    // cout << res << '\n';

}


