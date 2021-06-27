rm cscope.* tags
find `pwd` -name "*.[ch]" -o -name "*.cpp" > cscope.files 
#find ./ -name "*.h" -o -name "*.c" -o -name "*.cc" -o -name "*.cpp" > cscope.files
cscope -Rbq -i cscope.files
ctags -R *
