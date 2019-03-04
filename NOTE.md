# **剑指offer笔记**

## 第二章：C++

##### 面试题1：Duplicate找出数组中重复的数字

题目：在一个长度为n的数组里的所有数字都在0到n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，
也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
例如，如果输入长度为7的数组{2, 3, 1, 0, 2, 5, 3}，那么对应的输出是重复的数字2或者3。

知识点：

1. 函数参数传入时；形参为指针类型，这实参传入的应该是地址（使用&）；形参为数组类型时，形参应该带有[]，实参传入时应该是数组名。

   ```c++
   	//函数定义
   	bool static duplicate(int numbers[], int length, int* duplicate);
   	//函数调用
   	int num3[] = {1, 3, 2, 5, 3};
       int dup;
       bool have =  Duplicate::duplicate(num3, sizeof(num3)/sizeof(int), &dup);
   ```

2.  

   ```c++
   int data1[] = {1, 2, 3, 4, 5};
   int size1 = sizeof(data1);
   int *data2 = data1;
   int size2 = sizeof(data2);
   int size3 = GetSize(data1);
   size1 = 20, size2 = 4, size3 = 4;
   //数组在当做参数传入的时候会降级变成普通指针。
   ```
##### 面试题2：找出重复数字但是不能改变原来的数组
知识点：

1. 在使用二分法查找的时候；可以使用

   ```
   int middle = ((end - start) >> 1) + start
   ```

2. 

