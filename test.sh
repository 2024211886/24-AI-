#!/bin/bash


#����c++����

g++ FileName.cpp -o main

#�������Ƿ�ɹ�

if[$? -ne 0];  then

echo "����ʧ�ܣ���������Ƿ��д���"
    exit 1

    fi


    # ֱ�����г��򣨺����ֶ���./ FileNameһ����

    ./ FileName

    # ��ʾ���
echo "�������н���"