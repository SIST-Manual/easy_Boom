
# easy_Chthollys-request

本题题面转移至https://github.com/SIST-Manual/easy_New-boom

## 题目描述 / Description

Keyiyuan is playing nuclear these days. He needs to move some `GTX1926-Ti` (that is a "gnuclear") one by one into the Time Tower. Each nuclear includes two types of GPU clocks (we just call it clock). If at any moment, the number of different clock types in any subset of all the gnuclears that has been moved into the tower is equal to the number of gnuclears in this particular subset, the Time Tower will end its life. Keyiyuan moves nuclear one by one to the Time Tower. Our question is that what is the number of nuclear when Time Tower run out of its life? If the Time Tower survived, You should output "no" or you should output an integer in otherwise.

## 输入 / Input

The first line is an integer `N`

The next `N` lines include two integers which represent the two clock types `t(2i),t(2i+1)` in the current gnuclear.

N ≤ 10^5

`t(2i),t(2i+1)` ≤ 10^5

## 输出 / Output

If the Time Tower will break down, Output an integer represent the number of nuclear when Time Tower run out of its life.

Otherwise, output "no" 

## 样例 / Example

### input

4

2 1

2 3

2 1

2 1

### output

3

## 测试 / Test

You can test offline by downloading [the test data](https://github.com/SIST-Manual/easy_Boom/blob/master/data/)

Example: `./solve < data/boom1.in > test.out && diff -b test.out data/boom1.out`

Or you can just use my simple test script `test.py` after modifying `JUDGE_COMMAND`

## 提示 / Hint

Maybe you need to learn Union-find Sets first.

## 答案 / Solutions

[Cpp](https://github.com/SIST-Manual/easy_Boom/blob/master/solve.cpp)


