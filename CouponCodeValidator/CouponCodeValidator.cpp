#include <iostream>
#include "ValidCoupon.h"

int main()
{
    vector<string> code = { "SAVE20","","PHARMA5","SAVE@20" };
    vector<string> businessLine = { "restaurant","grocery","pharmacy","restaurant" };
    vector<bool> isActive = { true,true,true,true };

    vector<string> ans = validateCoupons(code, businessLine, isActive);
    for (string a : ans) {
        cout << a << std::endl;
    }
}

