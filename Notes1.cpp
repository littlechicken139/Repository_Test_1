//
// Created by 学者 on 2024/1/23.
//
#include <iostream>// 头文件有cout,cin----不读空格
#include <cstdio>// 有printf和scanf----更高效

using namespace std;// 命名空间,
// 不写的话要写std::cout <<.......

int main()// 入口
{
    cout << "HHHHHHHH" << endl;// 不管类型了
    printf("%d\n", 12345);// 可以格式化字符串
    printf("%.2f\n",12.2344);
    char b = 'a';
    printf("%c\n",b);
    printf("%lf\n",1234.145);
    printf("%lld\n",1111111111111111111);

    // 变量
//float 小数点后6~7
//double 15~16位有效数字
//long long
long long a = 1234567890123456789LL;//19个数
// 字节与内存 : B(Byte) = b(bit) * 8
    printf("%lld", a);

// level2-省一,acm-level4
    return 0;// 出口,返回的不是0就是程序出问题了
}


//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//
//
//    return 0;
//}