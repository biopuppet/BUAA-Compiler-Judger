#!/bin/bash

## Author: Demard
## Email: biopuppet@outlook.com

# Color
RESTORE=$(echo -en '\033[0m')
RED=$(echo -en '\033[00;31m')
GREEN=$(echo -en '\033[00;32m')
YELLOW=$(echo -en '\033[00;33m')
BLUE=$(echo -en '\033[00;34m')
MAGENTA=$(echo -en '\033[00;35m')
PURPLE=$(echo -en '\033[00;35m')
CYAN=$(echo -en '\033[00;36m')
LIGHTGRAY=$(echo -en '\033[00;37m')
LRED=$(echo -en '\033[01;31m')
LGREEN=$(echo -en '\033[01;32m')
LYELLOW=$(echo -en '\033[01;33m')
LBLUE=$(echo -en '\033[01;34m')
LMAGENTA=$(echo -en '\033[01;35m')
LPURPLE=$(echo -en '\033[01;35m')
LCYAN=$(echo -en '\033[01;36m')
WHITE=$(echo -en '\033[01;37m')

echo -e "\033[5;34m##### C0 Compiler Project Test Script ######\033[0m\n"

if (( $# > 0 )); then
    id=$1
else
    id=1
fi

if (( $# > 1 )); then
    tag=_$2
else
    tag=
fi

root=.
lib_dir=$root/lib
test_dir=$root/test/codegen

mars=$lib_dir/Mars_Compiler.jar
intermediate_code=$root/17182680_刘丰博_优化前中间代码.txt
mips_file=$root/mips.txt

stdin_file=$test_dir/case_${id}${tag}_stdin.txt
stdout_file=$test_dir/case_${id}${tag}_stdout.txt
standard_file=$test_dir/case_${id}${tag}_standard.txt
test_asm=$test_dir/case_${id}${tag}_mips.asm
test_src=$test_dir/case_${id}${tag}_src.cc
test_ir=$test_dir/case_${id}${tag}_ir.txt
test_exec=$test_dir/case_${id}${tag}_exec.out

# Make
# make -s run

# Copy original output files to test dir
cp $intermediate_code $test_ir
cp $mips_file $test_asm

# Generate equivalent clang compilable source code
echo "#include \"redefio.h\"" > $test_src
cat testfile.txt >> $test_src
# Replace "void main" with "int main" and force to return 0
sed -i 's/void main[ ]*(/#define return return 0\nint main(/' $test_src
# Prevent compiler from recognizing "++"/"--" as increment/decrement operator
sed -i 's/++/+ +/g' $test_src
sed -i 's/--/- -/g' $test_src
echo -e "${BLUE}$test_src successfully generated.${RESTORE}\n"

read_int_cnt=$(grep -oe 'read int' ${test_asm} | wc -l)
read_char_cnt=$(grep -oe 'read char' ${test_asm} | wc -l)
ch_cnt=$(cat ${stdin_file} | wc -w)
int_cnt=$(grep -oE '[0-9]+' ${stdin_file} | wc -w)

if [ ! -f $stdin_file ]; then
    echo "short of stdin file, creating an empty temp!"
    echo -e "1\n2\n3\n4\n5\n" > $stdin_file # FIXME
fi

echo -e "${RED}MARS running $test_asm ...${RESTORE}\n"
if (( $read_int_cnt + $read_char_cnt == 0 )); then
    echo "no read!"
    java -jar $mars nc me mc Default $test_asm > $stdout_file
else
    java -jar $mars nc me mc Default $test_asm < $stdin_file > $stdout_file
fi

echo -en "${PURPLE}Compiling standard source code...${RESTORE}\n"
g++ -O1 $test_src -o $test_exec

echo -en "${GREEN}Running standard source code...${RESTORE}\n"
$test_exec < $stdin_file > $standard_file 
rm $test_exec
echo -en "${LGREEN}Standard output has been redirected to $standard_file...${RESTORE}\n"

echo -en "${CYAN}Diffing $standard_file and $stdout_file...${RESTORE}\n"
diff -Z $standard_file $stdout_file

echo -en "${LIGHTGRAY}^^^^^^^^^^^^^^^^^^^ Done ^^^^^^^^^^^^^^^^^^^${RESTORE}\n"
