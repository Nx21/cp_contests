/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conditional_probabilities.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhanafi <nhanafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:17:23 by nhanafi           #+#    #+#             */
/*   Updated: 2023/01/18 22:27:56 by nhanafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 



class fraction
{
    private:
        int demn;
        int frec;
    public:
        fraction(string str):frec(1)
        {
            demn = stoi(str.substr(0, str.find_first_of("/")));
            frec = stoi(str.substr(str.find_first_of("/") + 1));
        };
        fraction(int a, int b):frec(1)
        {
            demn = a;
            frec = b;
        };
        int d(){return demn;};
        int f(){return frec;};
        fraction	operator=( fraction const & rhs )
        {
            this->demn = rhs.demn;
            this->frec = rhs.frec;
            return (*this);
        };
        fraction	operator+( fraction const & rhs )
        {
            int d = (this->demn * rhs.frec + rhs.demn * this->frec)/gcd(this->frec, rhs.frec);
            fraction res(d,lcm(this->frec, rhs.frec));
            return res;
        };
        fraction	operator-( fraction const & rhs )
        {
            int d = (this->demn * rhs.frec - rhs.demn  * this->frec)/gcd(this->frec, rhs.frec);
            fraction res(d,lcm(this->frec, rhs.frec));
            return res;
        };
        fraction	operator*( fraction const & rhs )
        {
            int d = this->demn * rhs.demn;
            int f = this->frec * rhs.frec;
            int _gcd = gcd(d,f);
            d /= _gcd;
            f /= _gcd;
            fraction res(d,f);
            return res;
        };
        fraction	operator/( fraction const & rhs )
        {
            int d = this->demn * rhs.frec;
            int f = this->frec * rhs.demn;
            int _gcd = gcd(d,f);
            d /= _gcd;
            f /= _gcd;
            fraction res(d,f);
            return res;
        };
};

std::ostream &operator<<(std::ostream &o, fraction &F)
{
	o << F.d() << "/" << F.f();
    return o;
}






int main()
{
    string p_1;
    getline(cin, p_1);
    string p_2;
    getline(cin, p_2);
    string p_3;
    getline(cin, p_3);
    
    fraction a(p_1);
    fraction b(p_2),c(p_3);
    
    cout << b << endl;
    cout << c << endl;
    a = b + c;
    cout << a << endl;
    // cout << (c + b) << endl;
    // cout << (c * a) << endl;
}