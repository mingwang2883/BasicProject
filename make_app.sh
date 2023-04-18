#!/bin/bash

if [ ! -d ./build ];then
    mkdir build
fi

cd build
cmake ../
make -j4
if [ $? -eq 0 ];then
    echo -e "------------------------------------------------"
    echo -e "\n\n\n\n\n\n\n\n"
    bin/basic_pro
fi

