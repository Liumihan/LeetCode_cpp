//
// Created by liumihan on 19-3-2.
//

#ifndef GETMYOFFER_CMYSTRING_H
#define GETMYOFFER_CMYSTRING_H
/*
 * 为如下类型CMyString添加赋值运算符函数
 * */


#include<cstring>
#include<cstdio>

class CMyString
{
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);

    CMyString& operator = (const CMyString& str);

    void Print();

private:
    char* m_pData;
};








#endif //GETMYOFFER_CMYSTRING_H
