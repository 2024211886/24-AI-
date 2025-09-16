#!/bin/bash


#编译c++代码

g++ FileName.cpp -o main

#检查编译是否成功

if[$? -ne 0];  then

echo "编译失败！请检查代码是否有错误"
    exit 1

    fi


    # 直接运行程序

    ./ FileName

    # 提示完成

echo "程序运行结束"
