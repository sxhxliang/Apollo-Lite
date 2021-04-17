#!/bin/bash
echo "##### Generate protobuf files Start #####"

path=$1
files=$(ls $path)

for filename in $files
do
    
    if [ "${filename##*.}"x = "proto"x ];then
        echo "Generate : "; 
    protofile=$path/$filename
    echo $protofile
        protoc -I=./ --cpp_out=./ $protofile
    fi
done
echo "##### Generate protobuf files End #####"
